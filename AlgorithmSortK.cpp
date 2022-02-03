#include "AlgorithmSortK.h"

int AlgorithmSortK::select() {
	int numbersAmount;
	cin >> numbersAmount;
	int *pNumbers = 0;
	pNumbers = new int[k];
//Get k numbers from textfile.
	for (int i = 0; i < k; i++) {
		cin >> pNumbers[i];
	}
	SortArray(pNumbers, numbersAmount);
//Get next numbers from textfile and replace it with last number in array if it is bigger than it and sort the array.
	for (int y = 0; y < numbersAmount-k; y++) {
		int nextNumber;
		cin >> nextNumber;
		if (nextNumber >= pNumbers[k - 1]) {
			pNumbers[k - 1] = nextNumber;
			SortArray(pNumbers, numbersAmount);
		}
	}
	return pNumbers[k - 1];

	delete[] pNumbers;
	pNumbers = 0;
}

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k) {
	
}

//Added an extra method which only sorts an array in decreasing order.
void AlgorithmSortK::SortArray(int arr[], int sth) {
	int firstNumberinArray;
	int secondNumberinArray;
	for (int i = 1; i < k; i++) {
		secondNumberinArray = arr[i];
		firstNumberinArray = i - 1;
		while (firstNumberinArray >= 0 && arr[firstNumberinArray] < secondNumberinArray) {
			arr[firstNumberinArray + 1] = arr[firstNumberinArray];
			firstNumberinArray = firstNumberinArray - 1;
		}
		arr[firstNumberinArray + 1] = secondNumberinArray;
	}
}



