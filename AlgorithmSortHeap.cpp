#include "AlgorithmSortHeap.h"
#include "BinaryHeap.h"

int AlgorithmSortHeap::select() {
	int numbersAmount;
	cin >> numbersAmount;
	BinaryHeap *minHeap = new BinaryHeap(numbersAmount);
	
	//Get k numbers from textfile.
	for (int i = 0; i < k; i++) {
		int numm;
		cin >> numm;
		minHeap->insert(numm);
	}
	for (int y = 0; y < numbersAmount - k; y++) {
		int nextNumber;
		cin >> nextNumber;
		if (nextNumber > minHeap->getMin()) {
			minHeap->deleteMin();
			minHeap->insert(nextNumber);
		}
	}
	return minHeap->getMin();

	delete minHeap;
	
}

AlgorithmSortHeap::AlgorithmSortHeap(int k) : SelectionAlgorithm(k) {
	
}