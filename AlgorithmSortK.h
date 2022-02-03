#include <iostream>
#include "SelectionAlgorithm.h"

#ifndef _AlgorithmSortK_
#define _AlgorithmSortK_

using namespace std;

class AlgorithmSortK : public SelectionAlgorithm {

public:
	int select();

	AlgorithmSortK(int);
//Extra method for sorting the array.
	void SortArray(int*, int);

};

#endif
