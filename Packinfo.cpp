#include "Packinfo.h"
#include <iostream>

using namespace std;

/* A pair of vector, time_t represents the timestamps*/
vector<pair<time_t, int>> packinfo::setPackinfo(int package_num)
{
	/* initialize a timestamps function */
	time_t ttime = time(0);
	vector<pair <time_t, int>> vec;
	vec.push_back(make_pair(ttime, 0));
	cout << "Initialising Packinfo matrix  ..." << endl;
	cout << endl;
	return vec;
}
