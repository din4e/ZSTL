#pragma once
#include<iostream>
#include<ctime>

class ztime
{
public:
	ztime() { this->b_ = clock(); };
	void begin() { this->b_ = clock(); };
	double data() {
		this->e_ = clock();
		this->t = (double(this->e_) - double(this->b_)) / CLOCKS_PER_SEC;
		return this->t;
	};
	void end() {
		this->e_ = clock();
		this->t = (double(this->e_) - double(this->b_)) / CLOCKS_PER_SEC;
	};
private:
	clock_t    b_ = 0, e_ = 0;
	double     t = 0;
};
#define ZTIME ztime time;