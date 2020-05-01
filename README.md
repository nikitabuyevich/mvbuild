## mvbuild

Kill a specified process from a class name and copy the contents of a file to another location.

Meant to be used as a post-build step when working with DLLs to easily launch an application after a new DLL is compiled.

There is also a [C implementation of the same application](https://github.com/nikitabuyevich/mvbuild-c).


Usage:

```bash
  -h [ --help ]           Display usage.
  -c [ --class ] string   Process class name to kill. e.g., "ConsoleWindowClass"
  -d [ --dst ]   string   Destination to copy contents to. Must be a full path
  -s [ --src ]   string   Source to copy contents from. Must be a full path.
```
  
Example:
```bash
mvbuild.exe -c ConsoleWindowClass -s C/build/lib.dll -d C/game/lib.dll
```

