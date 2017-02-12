#include <iostream>

bool is_prime(int n)
{
    if (n <= 1) return false;
    for(long long int i = 2; i < n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n = 2;
    int prime;
    for(int i = 0; i < 10001; ++i)
    {
        while(!is_prime(n))
        {
            n++;
        }
        prime = n;
        n++;
    }
    std:: cout << prime;
    return 0;
}
