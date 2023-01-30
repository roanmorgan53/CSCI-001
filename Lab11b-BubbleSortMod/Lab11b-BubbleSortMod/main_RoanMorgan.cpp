//Roan Morgan
//Bubble Sort Mod
//11.30.22
#include <iostream>
#include <iomanip>
using namespace std;

void printArray(int arg[], const int size);
void swap(int& x, int& y);
int bubbleSort(int arg[], const int size);

int main(void) {
	srand(time(0));

	//project description
	cout << "bubble sort algorithm\n\n";

	//an array of ints
	const int n = 10;
	int a[n];
	int plays = 500000;

	//populate the array with random numbers
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 51;
	}

	//run through the sort
	printArray(a, n);
	bubbleSort(a, n);
	printArray(a, n);

	//run the game 50,000 times
	double num = 0.0;
	for (int i = 0; i < plays; i++) {
		num += 1.0 * bubbleSort(a, n);

		for (int i = 0; i < n; i++) {
			a[i] = 1 + rand() % 50;
		}

	}

	double average = num / plays;

	cout << "Average: " << average;

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

int bubbleSort(int arg[], const int size)
{
	//bubble sort this array
	bool swapped;
	int swapTimes = 0;
	int pass = 0;

	do {
		swapped = false;
		//for each pass
		for (int i = 1; i < size-pass; i++) {
			swapTimes += 2;


			if (arg[i - 1] > arg[i]) {
				swap(arg[i - 1], arg[i]);
				swapped = true;
			}
		}
		pass++;
		swapTimes+=2;
	} while (swapped == true);
	return swapTimes;
}
