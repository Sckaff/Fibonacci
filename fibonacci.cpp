#include<iostream>

void requestNum(long double&, long double&, long double&);
void performFib(long double&, long double&, long double&);
void goldenRatio();


int main()
{
		//Plus put all of it in a file??
	long double x;
	long double y;
	long double n;

	requestNum(x, y, n);

	performFib(x, y, n);

	return 0;
}

void requestNum(long double& x, long double& y, long double& n)
{
	using std::cout;
	using std::cin;

	cout << "Welcome! This is a Fibonacci-like sequence generator :))\n\n";
	cout << "Please, enter your first number: ";
	cin >> x;
	cout << "How about the second number?: ";
	cin >> y;
	cout << "How many iterations? ";
	cin >> n;
}

void performFib(long double& x, long double& y, long double& n)
{
	long double fib;

		for (int i = 0; i < n; i++)
	{
			using std::cout;
			using std::endl;
		cout << x << endl;

		fib = x + y;
		x = y;
		y = fib;
	}
}

void goldenRatio()
{

}