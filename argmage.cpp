#include <iostream>
#include <vector>
#include <map>
#include "argmage.h"

using namespace std;

namespace argmage{

	vector<string> argvtovec(int argc, char* argv[]){
		vector<string> out;

		if(argc < 2){
			return out;
		}

		for(int i = 1; i < argc; i++) out.push_back( (string)argv[i] );

		return out;
	}


	vector<string> argvtovec(int argc, char* argv[], int flag){

		vector<string> out;

		if(argc < 2){
			return out;
		}

		vector<string> args;

		for(int i = 1; i < argc; i++) args.push_back( (string)argv[i] );



		if(flag == 1){

			for(int i = 0; i < args.size(); i++){

				// if not end of vector and
				// if the first char of string i is '-' and first char of string i is not '-'
				// concat with space
				if( (i + 1) < args.size() && ((args.at(i).at(0) == '-') && (args.at(i + 1).at(0) != '-')) ){

					out.push_back(args.at(i) + " " + args.at(i + 1));

					i++;

				} else {
					out.push_back(args.at(i));
				}
			}

		} else if(flag == 2){

			for(int i = 0; i < args.size(); i++){

				// if not end of vector and
				// if the first char of string i is '-' and first char of string i is not '-'
				// concat without space
				if( (i + 1) < args.size() && ((args.at(i).at(0) == '-') && (args.at(i + 1).at(0) != '-')) ){

					out.push_back(args.at(i) + args.at(i + 1));

					i++;

				} else {
					out.push_back(args.at(i));
				}

			}



		} else {
			for(int i = 0; i < args.size(); i++){

				out.push_back(args.at(i));
			}

		}



		return out;
	}

}


// map<string, string>
