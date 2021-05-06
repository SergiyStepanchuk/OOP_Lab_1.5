#pragma once
#include "Pair.h"

class Money
{
private:
	Pair pair;

public:

	int GetFirst() const { return pair.GetFirst(); }
	int GetSecond() const { return pair.GetSecond(); }
	void SetFirst(int value);
	void SetSecond(int value);

	void Init(int F, int S);
	void Read();
	void Display() const;
	string ToString() const;

	friend Money Sum(const Money& p1, const Money& p2);
	friend Money Diff(const Money& p1, const Money& p2);
    friend double Division(const Money& p1, const Money& p2);

};