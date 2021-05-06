//Pair.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Pair
{
private:
	int first;
	int second;

public:
	int GetFirst() const;
	int GetSecond() const;
	void SetFirst(int value);
	void SetSecond(int value);


	void Read();
	void Init(int F, int S);
	void Display() const;
	string ToString() const;


	friend Pair Sum(const Pair& p1, const Pair& p2);
	friend Pair Dob(const Pair& p, int n);

};