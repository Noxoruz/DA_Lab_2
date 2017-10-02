// DA_Lab_2.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <iostream>
#include "stdafx.h"

using namespace std;

#define EXTRABIT(ith,ch) (

template <typename T> void printInbits(T v)
{
	int *n = (reinterpret_cast<int *>(&v));

	for (int i = 8; i >= 0; i--)
	{
		cout << ((*n >> i) & 1);
	}
	cout << end;
}
typedef struct foo
{
	int a = 2;
	char b = -1;
	unsigned long long int x = 1LLU << 63;
};


int main()
{
    return 0;
}

