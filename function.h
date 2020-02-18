#pragma once
#include<iostream>
#include<vector>
using namespace std;

void isPossible(int sum=0) {
	cout << "sum:" << sum<<"\n";
}

void testIsPossbile() {
	isPossible(0);
	isPossible(1);
}

class a
{
private:
	void doSomthing()
	{
		cout << "doSomethings in A\n";
	}	
};

class b:a
{
	
};

void testAB()
{
	
}
