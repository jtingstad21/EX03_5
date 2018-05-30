#include "MyInt.h"

//Compilers
MyInteger::MyInteger()
{
	value = 0;
}
MyInteger::MyInteger(int newValue)
{
	value = newValue;
}
int MyInteger::getValue()
{
	return value;
}


//Set1 of functions
bool MyInteger::isEven()
{
	if (value % 2 == 0)
		return true;
	else
		return false;
}
bool MyInteger::isOdd()
{
	if (value % 2 != 0)
		return true;
	else
		return false;
}
bool MyInteger::isPrime()
{
	for (int i = 2; i < value; i++)
	{
		if (value % i == 0)
			return false;
		else
			return true;
		break;
	}
}



//Set2 of functions
bool MyInteger::isEven(int a)
{
	if (a % 2 == 0)
		return true;
	else
		return false;
}
bool MyInteger::isOdd(int b)
{
	if (b % 2 != 0)
		return true;
	else
		return false;
}
bool MyInteger::isPrime(int c)
{
	for (int i = 2; i < c; i++)
	{
		if (c % i == 0)
			return false;
		else
			return true;
		break;
	}
}


//Set3 of functions
bool MyInteger::isEven(const MyInteger & n1)
{
	return n1.isEven(n1);
}
bool MyInteger::isOdd(const MyInteger & n2)
{
	return n2.isOdd(n2);
}
bool MyInteger::isPrime(const MyInteger & n3)
{
	return n3.isPrime(n3);
}


//Set4 of functions
const bool MyInteger::equals(int v1)
{
	if (v1 == value)
		return true;
	else
		return false;
}
const bool MyInteger::equals(const MyInteger & num1)
{
	return equals(num1);
}


//Set5 of functions
//int MyInteger::parseInt(const string& name)
//{
//	int size;
//	size = name.length();
//	return size;
//}
