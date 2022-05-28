#include "AlgorithmSortQuick.h"

int AlgorithmSortQuick::select() {
	int numbersAmount;
	cin >> numbersAmount;
	int* pNumbers = 0;
	pNumbers = new int[numbersAmount];
	//Get all numbers from textfile and put it in array.
	for (int i = 0; i < numbersAmount; i++) {
		cin >> pNumbers[i];
	}
	int result = quickselect(pNumbers, 0, numbersAmount - 1, k);

	delete[] pNumbers;
	return result;
}

int AlgorithmSortQuick::quickselect(int* pNumbers, int left, int right, int k) {
	if ((right - left) < 10) {
		int firstNumberinArray;
		int secondNumberinArray;
		for (int i = left+1; i < right+1; i++) {
			secondNumberinArray = pNumbers[i];
			firstNumberinArray = i-1;
			while (firstNumberinArray >= 0 && pNumbers[firstNumberinArray] < secondNumberinArray) {
				pNumbers[firstNumberinArray + 1] = pNumbers[firstNumberinArray];
				firstNumberinArray = firstNumberinArray - 1;
			}
			pNumbers[firstNumberinArray + 1] = secondNumberinArray;
		}
		/*for (int i = 0; i <= 8; i++) {
			cout << pNumbers[i]<<" ";
		}*/
		return pNumbers[left + k - 1];
		
	}

	else {
		int pivot = median3(pNumbers, left, right);
		int l = left;
		int r = right-1;
		for (; ;) {
			while (pNumbers[++l] >= pivot) {}
			while (pivot > pNumbers[--r]) {}
			if (l < r) {
				swap(&pNumbers[l], &pNumbers[r]);
			}
			else {
				break;
			}
		}
		swap(&pNumbers[l], &pNumbers[right-1]);
		int pi = l;

		if (k < (pi - left+1)) {
			return quickselect(pNumbers, left, pi - 1, k);
		}
		else if (k == 1+(pi - left+1)) {
			return pNumbers[pi];
		}
		else {
			return quickselect(pNumbers, pi+1, right, k-(pi-left+1));
		}
		

		/*for (int i = 0; i <= 15; i++) {
			cout << pNumbers[i] << " ";
		}
		cout << "KKKK" << k;
		cout << "LLLEFTT" << pi;*/
	
	}

}

int AlgorithmSortQuick::median3(int* pNumbers, int left, int right) {
	int center = (left + right) / 2;
	if (pNumbers[center] > pNumbers[left]) {
		swap(&pNumbers[left], &pNumbers[center]);
	}
	if (pNumbers[right] > pNumbers[left]) {
		swap(&pNumbers[left], &pNumbers[right]);
	}
	if (pNumbers[right] > pNumbers[center]) {
		swap(&pNumbers[center], &pNumbers[right]);
	}
	swap(&pNumbers[center], &pNumbers[right - 1]);
	return pNumbers[right - 1];
	
	
	
}



void AlgorithmSortQuick::swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
AlgorithmSortQuick::AlgorithmSortQuick(int k) : SelectionAlgorithm(k) {

}
	
