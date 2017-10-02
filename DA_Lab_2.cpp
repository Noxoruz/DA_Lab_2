// DA_Lab_2.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <iostream>
#include "stdafx.h"
#define EXTRABIT(ith,ch)
using namespace std;



template <typename T> void printlnbits(T v)
{
	int *n = (reinterpret_cast<int *>(&v));

	for (int i = 8; i >= 0; i--)
	{
		cout << ((*n >> i) & 1);
	}
	cout << endl;
}
typedef struct foo
{
	int a = 2;
	char b = -1;
	unsigned long long int x = 1LLU << 63;
};


int main()
{
	const char a = 'a';
	const int b = -1L;
	const unsigned c = 1 << 31;
	const float d = -0.0f;
	const long long unsigned e = 1LLU << 40;
	const foo f;
	printlnbits(a);
	cout << a << endl;
	printlnbits(b);
	cout << b << endl;
	printlnbits(c);
	cout << b << endl;
	printlnbits(d);
	cout << d << endl;
	printlnbits(e);
	cout << e << endl;
	printlnbits(f);
	char ok;
	cin >> ok;
    return 0;
}

