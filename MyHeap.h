#ifndef _MYHEAP_H_
#define _MYHEAP_H_

#include <vector>
#include <ctime>
#include "time.h"
#include <iostream>

using namespace std;

class myHeap {

public:
	void max_heapify();

	void build_Heap();

	/*  If the value of deadline is small compared to others, it indicates that the package is approaching the deadline
		using maxheap to find out k earlist deadline and return their id value
	*/
	vector<int> KminDate(int package_num, vector<pair<time_t, int>> packinfo);
};

#endif