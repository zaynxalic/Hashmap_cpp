#ifndef _City_H_
#define _City_H_

#include <vector>

using namespace std;

class city {
	/* get the num of city from user input 0 < city_num <= 30 */
public:

	int city_num;

	int city_id;
	/* generate a table of city_num * city_num containing the distance
		return matrix
	*/
	vector<vector<int>> RandomLocation(int city_num);

	/* the input is the distance matrix obtaining from packageMatrix in Destinfo.cpp 
	return the shortest path using dynamic programming*/
	vector<int> shortestpath(vector<vector<int>> matrix);

};

#endif
