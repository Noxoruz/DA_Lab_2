// DA_Lab_2.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <iostream>
#include <bitset>
#include "stdafx.h"
using namespace std;

#define EXTRABIT(ith,ch)


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
}foo;


int main()
{
	const char a = 'a';
	const int b = -1L;
	const unsigned c = 1 << 31;
	const float d = -0.0f;
	const long long unsigned e = 1LLU << 40;
	const foo f;


	//cout << "bitset char: " << bitset<32>(a) << endl;
	
	cout << "char	: ";
	printlnbits(a);
	cout << a << endl << endl;
	
	cout << "int	: ";
	printlnbits(b);
	cout << b << endl << endl;
	
	cout << "unsigned: "; 
	printlnbits(c);
	cout << b << endl << endl;
	
	cout << "float	: ";
	printlnbits(d);
	cout << d << endl << endl;
	
	cout << "ll-unsigned: ";
	printlnbits(e);
	cout << e << endl << endl;
	
	cout << "<T> foo: ";
	printlnbits(f);



	char ok;
	cin >> ok;
    return 0;
}

