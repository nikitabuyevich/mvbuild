#ifndef CMD_PARSE_H_
#define CMD_PARSE_H_
#include <tuple>

namespace cmd
{
	std::tuple<std::string, std::string, std::string> Parse(int argc, char** argv);
}

#endif //CMD_PARSE_H_
