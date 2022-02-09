#include <iostream>
#include "SelectionAlgorithm.h"
#include "BinaryHeap.h"

#ifndef _AlgorithmSortHeap_
#define _AlgorithmSortHeap_

using namespace std;

class AlgorithmSortHeap : public SelectionAlgorithm {

public:
	int select();

	AlgorithmSortHeap(int);
};

#endif
