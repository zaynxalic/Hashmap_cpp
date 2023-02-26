#ifndef _Destinfo_H_
#define _Destinfo_H_
#include <vector>
#include "City.h"
#include "HashMap.h"
using namespace std;

class destinfo {
	/* get the num of city from user input 0 < package_num <= city_num*/

public:
	city c;

	int city_num = c.city_num;

	/* number of Existing packages*/
	int package_num;

	/* get the number of packages that need to deliver*/
	int package_to_deliver;

	int package_id;

	/* a hashmap whose key is the package_id and value is the destination*/
	HashMap<int, int> Destinfo;

	/* the input is vector of ids which need to be delivered.
	Use hashing structure to search for the destinations corresponding to ids.
	return the distance 2d vector of package id which need to deliver and its distance. */
	vector<int> packageToSentDestination(vector<int> ids);

	/* Generating package destination matrix
	The input is the output of vector<int> packagetosentDistance*/
	vector <vector<int>> packageMatrix(vector<int> city);

	/* as hashfunction is not initialized, use void function to represent initializing packinfo method*/
	void setPackinfo(int city_num);
};

#endif