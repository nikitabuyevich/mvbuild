#include <fmt/format.h>
#include <cmd/parse.h>

int main(int argc, char** argv)
{
	auto[className, src, dst] = cmd::parse(argc, argv);
	fmt::print("class: {}\nsrc: {}\ndst: {}\n", className, src, dst);
	return 0;
}
