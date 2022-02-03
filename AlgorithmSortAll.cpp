#include "AlgorithmSortAll.h"

int AlgorithmSortAll::select() {
	int numbersAmount;
	cin >> numbersAmount;
	int *pNumbers = 0;
	pNumbers = new int[numbersAmount];
//Get all numbers from textfile and put it in array.
	for (int i = 0; i < numbersAmount; i++) {
		cin >> pNumbers[i];
	}
//Sort the array.
	int firstNumberinArray;
	int secondNumberinArray;
	for (int i = 1; i < numbersAmount; i++) {
		secondNumberinArray = pNumbers[i];
		firstNumberinArray = i - 1;
		while (firstNumberinArray >= 0 && pNumbers[firstNumberinArray] < secondNumberinArray) {
			pNumbers[firstNumberinArray + 1] = pNumbers[firstNumberinArray];
			firstNumberinArray = firstNumberinArray - 1;
		}
		pNumbers[firstNumberinArray + 1] = secondNumberinArray;
	}

	return pNumbers[k-1];

	delete[] pNumbers;
	pNumbers = 0;
}

AlgorithmSortAll::AlgorithmSortAll(int k) : SelectionAlgorithm(k){

}

