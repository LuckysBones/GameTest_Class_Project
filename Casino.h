#pragma once
#include <string>
using namespace std;

// CSC234 ++ class project
//Header file for class Casino
// Header file for class Casino

namespace CSC234 {
	class Casino {
	public:
		static void play(string);
		virtual void start();
		~Casino();

	};
}