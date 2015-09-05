#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void swap(int* val1, int* val2)
{
	int temp;
	temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

int partition(int arr[], int low, int high) {
	int i = low - 1, j = low;
	int key = arr[high];
	while (j < high) {
		if (arr[j] <= key) {
			i++;
			if (i != j) {
				swap(&arr[i], &arr[j]);
			}
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	return i + 1;
}

void quicksort(int arr[], int low, int high) {
	int part;
	if (low < high) {
		part = partition(arr, low, high);
		quicksort(arr, low, part - 1);
		quicksort(arr, part + 1, high);
	}
}


void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {

	int arr[] = { 4,5,6,6,1,2,4,5,6,6,1 };
	int len = sizeof(arr) / sizeof(int);
	cout << len << endl;

	printArray(arr, len);
	quicksort(arr, 0, len - 1);
	cout << "After Quicksort " << endl;
	printArray(arr, len);
	sort(arr, arr + len);
	printArray(arr, len);
	getchar();
	return 0;
}