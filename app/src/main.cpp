#include <fmt/format.h>
#include <cmd/parse.h>
#include <wnd/process.h>

int main(int argc, char** argv)
{
	auto[className, src, dst] = cmd::Parse(argc, argv);
	fmt::print("class: {}\nsrc: {}\ndst: {}\n", className, src, dst);
	wnd::KillProcessByClassName(className);
	return 0;
}
