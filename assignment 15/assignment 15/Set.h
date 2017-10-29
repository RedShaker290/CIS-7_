#pragma once
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 999;

class Set
{
public:
	string content[SIZE];
	int top;

	Set();
	~Set();
	void push(string newelemnt);
	void interset(Set x);
	void comboAnddiff(Set x);
	void powerSet();
	void display();
};

