#include <iostream>
#include <tuple>
#include <boost/program_options.hpp>

namespace bpo = boost::program_options;

namespace cmd
{
	std::tuple<std::string, std::string, std::string> Parse(int argc, char** argv)
	{
		bpo::options_description
			desc
			("mvbuild: Kill a specified process from a class name and copy the contents of a file to another location."
			 "\nUsage");
		try
		{
			desc.add_options()
				("help,h", "Display usage.")
				("class,c",
					bpo::value<std::string>()->value_name("string"),
					"Process class name to kill. e.g., \"ConsoleWindowClass\"")
				("dst,d",
					bpo::value<std::string>()->value_name("string"),
					"Destination to copy contents to. Must be a full path")
				("src,s",
					bpo::value<std::string>()->value_name("string"),
					"Source to copy contents from. Must be a full path.");

			bpo::variables_map vm;
			bpo::store(bpo::parse_command_line(argc, argv, desc), vm);

			if (argc == 1 ||
				vm.count("help") ||
				!(vm.count("class") && vm.count("src") && vm.count("dst")))
			{
				std::cout << desc;
				std::exit(1);
			}

			return {
				vm["class"].as<std::string>(),
				vm["src"].as<std::string>(),
				vm["dst"].as<std::string>()
			};
		}
		catch (...)
		{
			std::cout << desc;
			std::exit(1);
		}
	}
}

