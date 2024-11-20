#pragma once
#include <iostream>
#include <ctime>
#include <algorithm>
#define INTEGER

#ifdef INTEGER
#define initArray initINT
#define printArray printINT
#define minNumber minNBRINT
#define maxNumber maxNBRINT
#define sortArray sortedINT
#define replaceElement replaceINT
#endif // INTEGER


void initINT(int* arr, const int size);
void initDOUBLE(double* arr, const int size);
void initCHAR(char* arr, const int size);

void printINT(int* arr, const int& size);
void printDOUBLE(double* arr, const int& size);
void printCHAR(char* arr, const int& size);

void minNBRINT(int* arr, const int& size);
void minNBRDOUBLE(double* arr, const int& size);
void minNBRCHAR(char* arr, const int& size);

void maxNBRINT(int* arr, const int& size);
void maxNBRDOUBLE(double* arr, const int& size);
void maxNBRCHAR(char* arr, const int& size);

void sortedINT(int* arr, const int& size);
void sortedDOUBLE(double* arr, const int& size);
void sortedCHAR(char* arr, const int& size);

void replaceINT(int* arr, const int& size, int index, int value);
void replaceDOUBLE(double* arr, const int& size, int index, int value);
void replaceCHAR(char* arr, const int& size, int index, int value);

