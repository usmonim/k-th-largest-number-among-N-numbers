#include <iostream>
#include <ctime>
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"

#ifndef _TestBed_
#define _TestBed_

using namespace std;

class TestBed {
private:
	SelectionAlgorithm *alghorithm;

public:
	void execute();

	void setAlgorithm(int, int);

	TestBed();

	~TestBed();
};

#endif
