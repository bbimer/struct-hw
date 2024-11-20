#include <iostream>
#include "function.h"

int main() {
	const int size = 10;
	int* arr = new int[size];
	int index = 0, value = 0;
	
	initArray(arr, size);
	printArray(arr, size);
	minNumber(arr, size);
	maxNumber(arr, size);
	sortArray(arr, size);

	std::cout << "\nEnter index&value: ";
	std::cin >> index >> value;
	replaceElement(arr, size, index, value);
	printArray(arr, size);

	delete[] arr;

	return 0;
}