
#include "BinaryHeap.h"
#include <iostream>
using namespace std;

BinaryHeap::BinaryHeap(int capacity) {
	this->capacity = capacity;
	heap = new int[capacity + 1];
	size = 0;
	// The element at index 0 is not used!
	// The root element will be placed at index 1
}

BinaryHeap::~BinaryHeap() {
	delete[] heap;
}

void BinaryHeap::insert(int element) {
	// The capacity of the heap is assumed to be fixed.
	// Insert the element if size < capacity
	// Do nothing otherwise.

	// After the new element is inserted, perform a percolate up operation here.
	// You can add a percolateUp method to the class,
	// or just implement the operations within this insert method.

	if (size < capacity) {
		size++;
		int hole = size;
		for (; hole > 1 && element < heap[hole / 2]; hole /= 2) {
			heap[hole] = heap[hole / 2];
		}
		heap[hole] = element;
	}

}

void BinaryHeap::deleteMin() {
	// If the size is less than 1, do nothing and stop
	// Otherwise, replace the root of the heap with the last element on the last level

	// Then, call the percolateDown function by providing the index of the root node, i.e., 1

	if (size < 1) {

	}
	else {
		int root = heap[1];
		heap[1] = heap[size];
		size--;
	}
	percolateDown(1);

}

int BinaryHeap::getMin() {
	// If the size is less than 1, return -1
	// Otherwise, return the value of the root node

	if (size < 1) {
		return -1;
	}
	else {
		return heap[1];
	}

}

void BinaryHeap::percolateDown(int hole) {
	// Compare the node with its children; if they are in the correct order, stop
	// Otherwise, swap the element with the smallest child
	// Repeat the operation for the swapped child node

	// 1. The node might not have a child at all
	// 2. The node might have only a left child
	// 2.1. The left child might be smaller
	// 3. The node might have both left and right children
	// 3.1 Only the left child might be smaller
	// 3.2 Only the right child might be smaller
	// 3.3 Both left and right children might be smaller, in which case the element should be swapped with the smallest of the two

	int leftChildrenIndex = 2 * hole;
	int rightChildrenIndex = 2 * hole + 1;
	int smallestChildrenIndex = hole;
	if (leftChildrenIndex <= size && heap[leftChildrenIndex] < heap[hole]) {
		smallestChildrenIndex = leftChildrenIndex;
	}
	if (rightChildrenIndex <= size && heap[rightChildrenIndex] < heap[smallestChildrenIndex]) {
		smallestChildrenIndex = rightChildrenIndex;
	}
	if (smallestChildrenIndex != hole) {
		swap(hole, smallestChildrenIndex);
		percolateDown(smallestChildrenIndex);
	}


}

void BinaryHeap::swap(int i, int j) {
	int t = heap[i];
	heap[i] = heap[j];
	heap[j] = t;
}

//void BinaryHeap::printHeap() {
//	
//	for (int i = 1; i <= size; i++) {
//		cout << heap[i] << " ";
//	}
//} 