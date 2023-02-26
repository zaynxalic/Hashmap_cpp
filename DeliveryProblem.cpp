// DeliveryProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.//

#include <iostream>
#include <vector>;
#include "City.h"
#include "Destinfo.h"
#include "HashMap.h"
#include "Packinfo.h"
#include <ctime>
#include "time.h"
#include "limits.h"
#include "MyHeap.h"

using namespace std;
int main()
{
	int city_num = INT_MAX;
	/* the existing num of package_num*/
	int package_num = 100000;
	int package_to_sent = INT_MAX;
	while (city_num > 30 || city_num <= 0) {
		cout << "Please enter the number of cities (0<num_city<=30)):"<<endl;
		/* wait for the input*/
		cin >> city_num;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		if (city_num <= 30 & city_num > 0 & cin.good()) break;
		else {
			cout << "The number you entered is unacceptable." << endl;
			cout << "Please reenter the number of cities" << endl;
		}
	}

	/*instantiate city classes*/
	city c;
	/* this method represents RandomLocation function in City.cpp*/
	vector<vector<int>> cityMatrix = c.RandomLocation(city_num);

	/* instantiate dest and pack classes*/
	packinfo pack;
	pack.package_num = package_num;

	/* the input is the existing package_num
	return the vector of pair <time_t, int>*/
	vector <pair<time_t, int>> p =  pack.setPackinfo(pack.package_num);

	/*instantiate dest classes*/
	destinfo dest;
	/*calling hashing function*/
	dest.Destinfo;

	dest.package_num = package_num;
	/* this method represents hashmap of setdestinfo 
	As hashmap is not implemented, use void function to represent the function.*/
	dest.setPackinfo(dest.package_num);

	while (package_to_sent > package_num || package_to_sent <= 0 ||cin.good()) {
		cout << "Please enter the number of packages to deliver (0<package_num<=10000)):" << endl;
		/* wait for the input*/
		cin >> package_to_sent;
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		if (package_to_sent <= package_num & package_to_sent > 0 & cin.good()) break;
		else {
			cout << "The number you entered is unacceptable." << endl;
			cout << "Please reenter the number of packages" << endl;
			cout << endl;
		}
	}

	pack.package_to_deliver = package_to_sent;

	myHeap max_heap;
	/*this step represent KminDate function in packinfo.cpp, 
	this function uses Max_heap function to generate K minimum value of deadline
	input is number of pack to deliver and the 2d vector <deadline, id>*/
	vector<int> ids = max_heap.KminDate(pack.package_to_deliver,p);
	
	/* input:packageids output:their destinations, using hash structure to find out their destinations */
	vector<int> city = dest.packageToSentDestination(ids);

	/* Generating the distance matrix*/
	vector<vector<int>> distMatrix = dest.packageMatrix(city);
	
	/* the input is the distance matrix obtaining from packageMatrix in Destinfo.cpp
	return the shortest path using dynamic programming*/
	c.shortestpath(distMatrix);
	return 0;
}

