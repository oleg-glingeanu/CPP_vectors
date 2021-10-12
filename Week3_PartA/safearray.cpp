#include <iostream>
#include "safearray.h"
using namespace std;

// Worked with Daniel Cullen

int mySafeArray::at(int x) {

	int value = x;

	if (value >= size) {
		cout << "You are out of bounds" << endl;

		return -1;
	}
	else
	{
		cout << "Your number is: " << arr[value] << " at index " << value - 1 << endl;
		cout << "Index is in the array " << endl;
		return 0;
	}
	
}

mySafeArray::mySafeArray() {

	cout << "In the Constructor" << endl;
	arr = new int[10];
	size = 10;

	for (int i = 0; i < size; i++) {
		arr[i] = i;
	}

}

mySafeArray::~mySafeArray() {
	cout << "In the Deconstructor " << endl;
	delete[] arr;
	arr = NULL;
}