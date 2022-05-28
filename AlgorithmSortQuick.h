#include <iostream>
#include "SelectionAlgorithm.h"

#ifndef _AlgorithmSortQuick_
#define _AlgorithmSortQuick_

using namespace std;

class AlgorithmSortQuick : public SelectionAlgorithm {

public:
	int select();

	int quickselect(int*, int, int, int);

	AlgorithmSortQuick(int);

	void swap(int*, int*);

	int median3(int* arr, int left, int right);


};

#endif
