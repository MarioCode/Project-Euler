#include <iostream>

int main()
{
    int steps = 40;
    long long paths = 1;
    for (int i = 0; i < steps/2; ++i)
    {
        paths *= steps - i;
        paths /= i + 1;
    }
    std::cout << paths;
    return 0;
}
