//Pair.cpp
#include "Pair.h"

int Pair::GetFirst() const
{
	return first;
}

int Pair::GetSecond() const
{
	return second;
}

void Pair::SetFirst(int value)
{
	first = value;
};

void Pair::SetSecond(int value)
{
	second = value;
};

void Pair::Init(int F, int S)
{
	SetFirst(F);
	SetSecond(S);
}

void Pair::Read()
{
	int x, y;
	cout << " a = "; cin >> x;
	cout << " b = "; cin >> y;
	Init(x, y);
	cout << endl;
}

void Pair::Display() const
{
	cout << " a = " << first << "; ";
	cout << " b = " << second << "; " << endl;	
	
	cout << "(" << first << ", " << second << ")";
	cout << endl;
}

Pair Sum(const Pair& p1, const Pair& p2)
{
	Pair tmp;
	tmp.first = p1.first + p2.first;
	tmp.second = p1.second + p2.second;
	return tmp;
}

Pair Dob(const Pair& p, int n)
{
	Pair tmp;
	tmp.first = p.first * n;
	tmp.second = p.second * n;
	return tmp;
}

string Pair::ToString() const
{
	stringstream sstr;
	sstr << "(" << first << ", " << second << ")";
	return sstr.str();
}




