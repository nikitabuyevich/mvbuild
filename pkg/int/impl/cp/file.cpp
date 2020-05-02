#include <cp/file.h>
#include <exception>
#include <filesystem>

namespace fs = std::filesystem;

void cp::File(std::string_view dst, std::string_view src)
{
	try
	{
		fs::copy_file(src, dst, fs::copy_options::overwrite_existing);
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
		std::exit(1);
	}
}

