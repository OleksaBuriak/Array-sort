#include<iostream>
using namespace std;

void arraySort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
		}
	}
}

void fillArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void main()
{
	srand(time(NULL));

	const int size = 10;
	int arr[size]{};
	fillArray(arr, size);
	printArray(arr, size);
	cout << endl;
	arraySort(arr, size);
	printArray(arr, size);
}