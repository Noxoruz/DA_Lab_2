// DA_Lab_2.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <iostream>
#include "stdafx.h"
#define EXTRABIT(ith,ch)
using namespace std;


//0x33 & 0xF0 = (0000 0000 0011 0011 & 0000 0000 1111 0011 = 0000 0000 0011 0000) = 0x30
//0x33 | 0xF0 = (0000 0000 0011 0011 | 0000 0000 1111 0000 = 0000 0000 1111 0011) = 0xF3
//0x33 ^ 0xF0 = (0000 0000 0011 0011 ^ 0000 0000 1111 0000 = 0000 0000 1100 0011) = 0xC3


template <typename T> void printlnbits(T v, T x)
{
	int *n = (reinterpret_cast<int *>(&v));
	int *m = (reinterpret_cast<int *>(&x));
	int *binary = (int*)malloc(sizeof(int)*8);
	int *binary_1 = (int*)malloc(sizeof(int)*8);

		for (int i = 8; i >= 0; i--)
		{
			binary[i] = ((*n >> i) & 1);
			binary_1[i] = ((*m >> i) & 1);
		
		}
		for (int i = 0; i < 8; i++)
		{
			printf_s("%d", binary[i]);
			
		}
		printf("\n");
		for (int i = 0; i < 8; i++)
		{
			printf_s("%d", binary_1[i]);
		}
		printf_s("\n");

		//and
		for (int i = 0; i < 8; i++)
		{
			if (binary[i] != 0 && binary[1] == binary_1[i])
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
		//or
		printf_s("\n");
		for (int i = 0; i < 8; i++)
		{
			if (binary[i] == 1 || binary_1[i] == 1)
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
		//XOR
		printf_s("\n");
		for (int i = 0; i < 8; i++)
		{
			if (binary[i] == 1 && binary_1[i] != 1 || binary[i] != 1 && binary_1[i] == 1)
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
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
	
	printlnbits(51, 240);
	/*cout << a << endl;
	cout << "Printing int b -1L: \t\t\t\t\t\t";
	printlnbits(b);
	cout << b << endl;
	cout << "Printing const unsigned c 1 << 31: \t\t\t\t";
	printlnbits(c);
	cout << b << endl;
	cout << "Printing float d -0.0f: \t\t\t\t\t";
	printlnbits(d);
	cout << d << endl;
	cout << "Printing const long long unsigned e = 1LLU << 40: \t\t";
	printlnbits(e);
	cout << e << endl;
	cout << "Printing const foo f: \t\t\t\t\t\t";
	printlnbits(f);
	cout << "F.a: "  <<f.a << "\tF.b: " << f.b << "\tF.x: " << f.x << endl;*/
	char ok;
	cin >> ok;
    return 0;
}

