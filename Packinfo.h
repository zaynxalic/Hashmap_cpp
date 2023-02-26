#ifndef _Packinfo_H_
#define _Packinfo_H_

#include "HashMap.h"
# include <ctime>
# include <time.h>
# include <vector>

using namespace std;

class packinfo {

public:
	/* get the number of existing package_num*/
	int package_num;

	/* get the number of packages that need to deliver*/
	int package_to_deliver;

	int package_id;
	/* the whole vector of packinfo*/
	vector<pair<time_t, int>> setPackinfo(int package_num);

};

#endif