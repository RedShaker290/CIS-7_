#pragma once
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 999;

struct stacktype
{
	string name;
	int num[SIZE];
	int top;
};