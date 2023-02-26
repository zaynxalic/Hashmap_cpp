#ifndef _HashMap_H_
#define _HashMap_H_
#include <iostream>
using namespace std;

/* create a hashtable template*/
template <typename K, typename V>
class HashMap {
	K _key;
	V _value;
public:
	/* insert */
	HashMap<K, V> insert(K key, V value);

	/* map the key value to integer value*/
	int Hashfunction(K key);

	/*find the value using Hashing structure*/
	V find_V(K key);

	/*calling hashmap*/
	HashMap(){
		cout << "Calling HashMap classes" << endl;
		cout << endl;
	}
};

#endif
