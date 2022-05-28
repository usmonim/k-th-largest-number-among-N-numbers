#include "TestBed.h"

void TestBed::execute() {
	clock_t start = clock();
	cout << "Result: " << alghorithm->select() << endl;
	clock_t end = clock();
	double cpu_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	cout << "Duration(sec): " << cpu_time << endl;
}

void TestBed::setAlgorithm(int type, int k) {
	if (type == 1) {
		alghorithm = new AlgorithmSortAll(k);
		execute();
	}

	if (type == 2) {
		alghorithm = new AlgorithmSortK(k);
		execute();
	}
	
	if (type == 3) {
		alghorithm = new AlgorithmSortHeap(k);
		execute();
	}
	
	if (type == 4) {
		alghorithm = new AlgorithmSortQuick(k);
		execute();
	}
}

TestBed::TestBed() {

}

TestBed::~TestBed() {
	delete alghorithm;
}
