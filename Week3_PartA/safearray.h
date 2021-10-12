#include <iostream>
#include <string>

using namespace std;

class mySafeArray {

	private:
		int* arr;
		int size = 10;

	public:
		mySafeArray();
		~mySafeArray();
		int at(int x);
};