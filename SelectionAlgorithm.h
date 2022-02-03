#include <iostream>

#ifndef _SELECTIONALGORITHM_
#define _SELECTIONALGORITHM_

using namespace std;

class SelectionAlgorithm  {

protected: 
	int k;
	
public:
	virtual int select();

	SelectionAlgorithm(int);

};

#endif 
