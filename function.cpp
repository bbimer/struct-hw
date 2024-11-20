#include "function.h"

void initINT(int* arr, const int size) {
	srand(time(0));
	for (int i = 0; i < size; ++i)
	{
		*(arr + i) = rand() % 11;
	}
}
void initDOUBLE(double* arr, const int size) {
	srand(time(0));
	for (int i = 0; i < size; ++i)
	{
		*(arr + i) = rand() % 11;
	}
}
void initCHAR(char* arr, const int size) {
	srand(time(0));
	for (int i = 0; i < size; ++i)
	{
		*(arr + i) = 'a' + rand() % 26;
	}
}


void printINT(int* arr, const int& size) {
	std::cout << "list" << " - ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}
void printDOUBLE(double* arr, const int& size) {
	std::cout << "list" << " - ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}
void printCHAR(char* arr, const int& size) {
	std::cout << "list" << " - ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}


void minNBRINT(int* arr, const int& size) {
	int min = *(arr + 0);
	
	std::cout << "min number" << " - ";
	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) < min)
		{
			min = *(arr + i);
		}
	}
	std::cout << min << std::endl;
}
void minNBRDOUBLE(double* arr, const int& size) {
	int min = *(arr + 0);

	std::cout << "min number" << " - ";
	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) < min)
		{
			min = *(arr + i);
		}
	}
	std::cout << min << std::endl;
}
void minNBRCHAR(char* arr, const int& size) {
	int min = *(arr + 0);

	std::cout << "min number" << " - ";
	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) < min)
		{
			min = *(arr + i);
		}
	}
	std::cout << min << std::endl;
}


void maxNBRINT(int* arr, const int& size) {
	int max = *(arr + 0);

	std::cout << "max number" << " - ";
	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) > max)
		{
			max = *(arr + i);
		}
	}
	std::cout << max << std::endl;
}
void maxNBRDOUBLE(double* arr, const int& size) {
	int max = *(arr + 0);

	std::cout << "max number" << " - ";
	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) > max)
		{
			max = *(arr + i);
		}
	}
	std::cout << max << std::endl;
}
void maxNBRCHAR(char* arr, const int& size) {
	int max = *(arr + 0);

	std::cout << "max number" << " - ";
	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) > max)
		{
			max = *(arr + i);
		}
	}
	std::cout << max << std::endl;
}


void sortedINT(int* arr, const int& size) {
	int* newArr = new int[size];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	std::sort(newArr, newArr + size);

	std::cout << "sorted - ";
	for (int i = 0; i < size; i++)
	{
		std::cout << newArr[i] << " ";
	}

	delete[] newArr;
}
void sortedDOUBLE(double* arr, const int& size) {
	int* newArr = new int[size];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	std::sort(newArr, newArr + size);

	std::cout << "sorted - ";
	for (int i = 0; i < size; i++)
	{
		std::cout << newArr[i] << " ";
	}

	delete[] newArr;
}
void sortedCHAR(char* arr, const int& size) {
	int* newArr = new int[size];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	std::sort(newArr, newArr + size);

	std::cout << "sorted - ";
	for (int i = 0; i < size; i++)
	{
		std::cout << newArr[i] << " ";
	}

	delete[] newArr;
}


void replaceINT(int* arr, const int& size, int index, int value) {
	for (int i = 0; i != index; ++i)
	{
		arr[index] = value;
	}
}
void replaceDOUBLE(double* arr, const int& size, int index, int value) {
	for (int i = 0; i != index; ++i)
	{
		arr[index] = value;
	}
}
void replaceCHAR(char* arr, const int& size, int index, int value) {
	for (int i = 0; i != index; ++i)
	{
		arr[index] = value;
	}
}



