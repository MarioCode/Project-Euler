#include <iostream>

int main()
{
    int sum = 0, a = 1, b = 2;
    for(int i = 0; b < 4000000; ++i)
    {
        if (b % 2 == 0)
            sum += b;
        int tmp = a;
        a = b;
        b = a + tmp;
    }
    std::cout << sum;

    return 0;
}
