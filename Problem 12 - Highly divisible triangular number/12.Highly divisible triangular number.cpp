#include <iostream>

using namespace std;

int num_of_divisors(int num)
{
    int numberOfDivisors = 1;
    for (int i = 2; i <= num; i++)
    {
        int exponent = 0;
        while (num % i == 0)
        {
            exponent++;
            num /= i;
        }
        numberOfDivisors *= (exponent + 1);
    }
    return numberOfDivisors;
}

int main()
{
    int divisors = 0, num = 1;
    unsigned int x = 0;
    while(divisors < 500)
    {
        x = num * (num + 1) / 2;
        divisors = num_of_divisors(x);
        num++;
    }
    cout << x << " : "<< divisors << endl;
}
