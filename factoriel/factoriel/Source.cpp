#include <iostream>

using namespace std;

long factorial(long n) {

	long result;

	if (n == 0 || n==1) {

		return 1;

	}

	result = factorial(n - 1) * n;

	return result;
}

int main() {

	long n = 0;
	cout << "Enter the number: ";
	cin >> n;

	cout << n << "! = " << factorial(n);

	return 0;

}