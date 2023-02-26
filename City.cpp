#include "City.h"
#include <iostream>

using namespace std;

/* generate the random distance*/
vector<vector<int>> city::RandomLocation(int city_num){
	vector<vector<int> > i{ { 1, 1, 1 },
									{ 2, 2, 2 } };
	cout << "Generating the " << city_num << " * " << city_num << " Distance Matrix..." << endl;
	cout << endl;
	return i;
}


vector<int> city::shortestpath(vector<vector<int>> matrix)
{
	vector<int> i{ 1, 1, 1 };
	cout << "Generating the shortest path using Dynamic Programming.." << endl;
	cout << "Give the result of path:" << endl;
	cout << "For example:  [A, B, C, A]" << endl;
	cout << endl;
	return i;
}
