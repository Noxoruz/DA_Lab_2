// DA_Lab_2.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <iostream>
#include "stdafx.h"
#define EXTRABIT(ith,ch)
using namespace std;


//0x33 & 0xF0 = (0000 0000 0011 0011 & 0000 0000 1111 0011 = 0000 0000 0011 0000) = 0x30 AND
//0x33 | 0xF0 = (0000 0000 0011 0011 | 0000 0000 1111 0000 = 0000 0000 1111 0011) = 0xF3 OR
//0x33 ^ 0xF0 = (0000 0000 0011 0011 ^ 0000 0000 1111 0000 = 0000 0000 1100 0011) = 0xC3 XOR


template <typename T> void printlnbits(T v, int x)
{
	int *n = (reinterpret_cast<int *>(&v));
	int *m = (reinterpret_cast<int *>(&x));
	int *binary = (int*)malloc(sizeof(int) * 8);
	int *binary_1 = (int*)malloc(sizeof(int) * 8);
	int *temp_binary_n = (int*)malloc(sizeof(int) * 8);
	int *temp_binary_m = (int*)malloc(sizeof(int) * 8);
	if (x == 0)
	{
		cout << "\n Single value function: ";
		for (int i = 8; i >= 0; i--) {
			cout << ((*n >> i) & 1);
		}
		cout << endl;
		return;
	}
	else
	{

		for (int i = 8; i >= 0; i--)
		{
			temp_binary_n[i] = binary[i] = ((*n >> i) & 1);
			temp_binary_m[i] = binary_1[i] = ((*m >> i) & 1);

		}
		cout << "int n converted to binary: ";
		for (int i = 0; i < 8; i++)
		{
			printf_s("%d", binary[i]);

		}
		printf("\n");
		cout << "int m converted to binary: ";
		for (int i = 0; i < 8; i++)
		{
			printf_s("%d", binary_1[i]);
		}
		printf_s("\n");

		//and
		cout << "AND in binary: ";
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
		cout << "OR in binary: ";
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
		cout << "XOR in binary: ";
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
		//RIGHT SHIFT BY 4
		printf_s("\n");
		cout << "Shifting n by 4 bits to the right: ";
		int k = 7;

		for (int i = 3; i >= 0; i--)
		{
			temp_binary_n[k] = temp_binary_n[i];
			temp_binary_n[i] = 0;
			k--;
			
		}
		for (int i = 0; i < 8; i++)
		{
			printf_s("%d", temp_binary_n[i]);
		}
		printf_s("\n");
		cout << "Shifting m by 4 bits to the right: ";
		k = 7;
		for (int i = 3; i >= 0; i--)
		{
			temp_binary_m[k] = temp_binary_m[i];
			temp_binary_m[i] = 0;
			k--;
		}
		for (int i = 0; i < 8; i++)
		{
			printf_s("%d", temp_binary_m[i]);
		}
		cout << "\n";
		cout << "Shifting n by 4 bits to the left: ";
		k = 4;
		for (int i = 0; i <= 3; i++)
		{
			binary[i] = binary[k];
			binary[k] = 0;
			k++;
		}
		for (int i = 0; i < 8; i++)
		{
			printf_s("%d", binary[i]);
		}
		cout << endl;
	}
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
	const unsigned c_1 = 0;
	const float d = -0.0f;
	const long long unsigned e = 1LLU << 40;
	const foo f;
	
	printlnbits(51, 240);

	cout << "\n\nBit comp completed\n";
	printlnbits(a, 0);
	cout << a << endl;
	cout << "Printing int b -1L: \t\t\t\t\t\t";
	printlnbits(b, 0);
	cout << b << endl;
	cout << "Printing const unsigned c 1 << 31: \t\t\t\t";
	printlnbits(c, 0);
	cout << b << endl;
	cout << "Printing float d -0.0f: \t\t\t\t\t";
	printlnbits(d, 0);
	cout << d << endl;
	cout << "Printing const long long unsigned e = 1LLU << 40: \t\t";
	printlnbits(e, 0);
	cout << e << endl;
	cout << "Printing const foo f: \t\t\t\t\t\t";
	printlnbits(f, 0);
	cout << "F.a: "  <<f.a << "\tF.b: " << f.b << "\tF.x: " << f.x << endl;
	char ok;
	cin >> ok;
    return 0;
}

