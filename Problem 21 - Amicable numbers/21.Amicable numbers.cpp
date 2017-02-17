#include <iostream>
#include <vector>

using namespace std;

int sum_divisors(int n)
{
    int sum = 1;
    for(int i = 2; i <= n / 2; ++i)
        if (n % i == 0)
            sum += i;
    return sum;
}


int main()
{
    vector<int> divis(1000);
    for(int i = 2; i < 10000; ++i)
    {
        divis[i] = sum_divisors(i);
    }

    int sum = 0;
    for(int i = 2; i < 10000; ++i)
    {
        if (divis[i] < 10000 && i == divis[divis[i]] && i != divis[i])
        {
            sum += i + divis[i];
            divis[divis[i]] = 0;
        }
    }

    cout << sum << endl;
    return 0;
}
