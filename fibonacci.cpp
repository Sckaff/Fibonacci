#include <vector>
#include<iostream>

void interface();
void requestNum(long double&, long double&, long double&);
void performFib(long double&, long double&, long double&);
void performTerm(int term);

int main()
{

	interface();

	return 0;
}

void interface()
{
	using std::cout;
	using std::cin;

	cout << "Welcome! This is a program based on the Fibonacci sequence :)"
		<< "\n\nIf you want to find a term from the Fibonacci sequence, enter 1!"
		<< "\n\nIf you want to develop your own Fibonacci-like sequence, enter 2!"
		<< "\n\nNumber: ";
	
	int number;
	cin >> number;

	switch(number){
	case 1:
		int term;
		cout << "\nWhich term of the Fibonacci sequence would you like to know?"
			<< "\nTerm: ";
		cin >> term;
		performTerm(term);
		break;
	case 2:
		long double x;
		long double y;
		long double n;

		requestNum(x, y, n);
		performFib(x, y, n);
	}

}

void requestNum(long double& x, long double& y, long double& n)
{
	using std::cout;
	using std::cin;

	cout << "\nPlease, enter your first number: ";
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

void performTerm(int term) {
	using std::cout;
	using std::vector;

	if (term < 4) {
		switch (term) {
		case 1:
			cout << "\nThe 1st term of the Fibonacci sequence is 1.\n\n";
			break;
		case 2:
			cout << "\nThe 2nd term of the Fibonacci sequence is 1.\n\n";
			break;
		case 3:
			cout << "\nThe 3rd term of the Fibonacci sequence is 2.\n\n";
			break;
		}
	}
	else {
		vector<unsigned long long int> fib{ 1,1,2 };

		for (int i = 3; i < term; i++) {
			fib.push_back(fib[i - 1] + fib[i - 2]);
		}

		cout << "\nThe " << term << "th term of the Fibonacci sequence is " << fib[term - 1] << "\n\n";	
	}
}