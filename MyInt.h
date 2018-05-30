class MyInteger
{
private:
	int value;
public:
	MyInteger();
	MyInteger(int);

	int getValue();

	bool isEven();
	bool isOdd();
	bool isPrime();

	static bool isEven(int a);
	static bool isOdd(int b);
	static bool isPrime(int c);

	static bool isEven(const MyInteger& n1);
	static bool isOdd(const MyInteger& n2);
	static bool isPrime(const MyInteger& n3);

	const bool equals(int v1);
	const bool equals(const MyInteger& num1);

	//static int parseInt(const string& name);
};
