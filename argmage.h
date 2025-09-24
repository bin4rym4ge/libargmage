#ifndef LIBARGMAGE_H
#define LIBARGMAGE_H

#include <string>
#include <vector>

namespace argmage{

	// argv to vector
	// one arg per index
	std::vector<std::string> argvtovec(int argc, char* argv[]);

	// argv to vector with flag formatting
	// flag 0 or < 2	same as no flag
	// flag 1		one flag and the following non-flag per index with ' ' seperator
	// flag 2		one flag and the following non-flag per index without seperator
	std::vector<std::string> argvtovec(int argc, char* argv[], int flag);

}

#endif
