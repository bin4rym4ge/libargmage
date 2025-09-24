#include <iostream>
#include <vector>
#include "argmage.h"

using namespace std;
using namespace argmage;

int main(int argc, char* argv[]){

	vector<string> in = argvtovec(argc, argv, 2);

	//echo
	for(string str: in) cout << str << endl;

	return 0;
}
