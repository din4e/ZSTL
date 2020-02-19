#pragma once
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<array>
#include<list>
#include "zUtils.h"

using namespace std;

void testarray() {

}
void testvector() {

}
void testset() {

}
void testlist() {

}
void testqueue() {

}
void testmap() {
	ZTIME
	map<int, int> mp;
	//1. insert
	for (int i = 0; i < ZSIZE; i++) {
		mp[randi(ZSIZE)]++;
	}
	cout << "testmap(): insert" << time.pre() << "s\n";

	for (auto it : mp) {
		//cout << it.second << "\n";
	}
	cout << "map for(auto it:map){} " << time.pre() << "s\n";
	
	for (auto it = mp.begin(); it != mp.end(); it++) {

	}
	cout << "map for(;;)" << time.pre() << "s\n";
	
	cout << "map total " << time.data()<<"s\n";
}
void testunorderedmap() {
	ZTIME
	unordered_map<int, int> ump;
	for (int i = 0; i < ZSIZE; i++) {
		ump[randi(ZSIZE)]++;
	}
	//
	for (auto it : ump) {
		//cout << it.first << " " << it.second << "\n";
	}
	cout << "unordered_map() " << time.data() << "s\n";
}


void testIterator() {
	testmap();
	testunorderedmap();
}