#include <iostream>
#include <math.h>

using namespace std;
typedef unsigned long int uli;

bool isPrime(int number) {

    int sqrt_num = sqrt((double)number);

	for (int i = 3; i <= sqrt_num; i += 2)
	{
		if (number % i == 0)
		{
            return false;
        }
	}

   return true;
}

int main() {

	long long int sum = 2;

	for (int i = 3; i < 2000000; i += 2)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}

	cout << "Sum of all the primes below two million = " << sum << endl;

	return 0;
}
