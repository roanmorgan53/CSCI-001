//Roan Morgan
//Bubble Sort Algorithm
//11.28.22
#include <iostream>
#include <iomanip>
using namespace std;

void printArray(int arg[], const int size);
void swap(int& x, int& y);
void bubbleSort(int arg[], const int size);

int main(void) {
	srand(time(0));
	
	//project description
	cout << "bubble sort algorithm\n\n";

	//an array of ints
	const int n = 10;
	int a[n];

	//populate the array with random numbers
	for (int i = 0; i < n; i++) {
		a[i] = 1 + rand() % 10;
	}

	//run through the sort
	printArray(a, n);
	bubbleSort(a, n);
	printArray(a, n);

	return(0);
}

void printArray(int arg[], const int size)
{
	for (int i = 0; i < size; i++) {
		cout << arg[i] << ", ";
	}
	cout << endl;
}

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;

}

void bubbleSort(int arg[], const int size)
{
	//bubble sort this array
	bool swapped;

	do {
		swapped = false;
		//for each pass
		for (int i = 1; i < size; i++) {
			if (arg[i - 1] > arg[i]) {
				swap(arg[i - 1], arg[i]);
				swapped = true;
			}
		}

	} while (swapped == true);

}
