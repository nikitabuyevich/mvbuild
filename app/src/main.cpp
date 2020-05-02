#include <cmd/parse.h>
#include <wnd/process.h>
#include <cp/file.h>

int main(int argc, char** argv)
{
	auto[className, src, dst] = cmd::Parse(argc, argv);
	wnd::KillProcessByClassName(className);
	cp::File(dst, src);
	return 0;
}
