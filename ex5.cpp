// ex5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "myInt.h"
#include <string>
using namespace std;

int main()
{
	int value;
	cout << "enter an integer: " << endl;
	cin >> value;

	MyInteger int1;
	cout << "Even1: " << int1.isEven() << endl;
	cout << "Even2: " << int1.isEven(5) << endl;
	int x = 13;
	cout << "Even 3: " << int1.isEven(x) << endl;

	cout << "Odd1: " << int1.isOdd() << endl;
	cout << "Odd2: " << int1.isOdd(5) << endl;
	cout << "Odd3: " << int1.isOdd(x) << endl;

	cout << "Prime1: " << int1.isPrime() << endl;
	cout << "Prime2: " << int1.isPrime(5) << endl;
	cout << "Prime3: " << int1.isPrime(x) << endl;

	cout << "Equals1: " << int1.equals(5);
	cout << "Equals2: " << int1.equals(x);

	//cout << "Number of chars in string: " << int1.parseInt("hahahahah i spent 9 hours on this assignment");

    return 0;
}

