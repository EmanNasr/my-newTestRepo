// array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* getDouble(int* x)
{
	
	int result = (*x ) * 2;

	return &result;
}

void printName(string name)
{
	cout << "Hello" << name <<endl;
}

int main()
{
   
	int columns = 4, rows = 3;

	//one dimention array
	int* p = new int[columns];

	//declare two dimention array
	int** array=new int*[rows];
	for (int i = 0;i < rows;i++)
		array[i] = new int[columns];


	for (int i = 0;i < rows;i++)
		delete[] array[i];
	delete[] array;

	int x = 5;
	
	int* ptr = getDouble(&x);
	printName("eman nasr");
	cout << "The ptr in main is :" << *ptr << endl;

	
}


