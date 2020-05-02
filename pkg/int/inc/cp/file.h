#ifndef CP_FILE_H_
#define CP_FILE_H_

#include <iostream>

// Perform basic operations around copying.
namespace cp
{
	// Copy a file from one location to another.
	void File(std::string_view dst, std::string_view src);
}

#endif //CP_FILE_H_
