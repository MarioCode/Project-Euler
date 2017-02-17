#include <iostream>
#include <map>

std::map<int, int> m = {
                   {1, 3}, {2, 3}, {3, 5}, {4, 4}, {5, 4}, {6, 3},
                   {7, 5}, {8, 5}, {9, 4}, {10, 3}, {11, 6}, {12,6},
                   {13, 8}, {14, 8}, {15, 7}, {16, 7}, {17,9}, {18, 8},
                   {19, 8}, {20, 6}, {30, 6}, {40, 5}, {50, 5}, {60, 5},
                   {70, 7}, {80, 6}, {90, 6}, {100, 10}, {1000, 11}};

int main()
{
    //21-99
    for(int i = 21; i < 100; ++i)
    {
        if (i % 10 != 0)
        {
            int units = i % 10;
            int tens = i - units;
            m[i] = m[tens] + m[units];
        }
    }

    //101-999
    for(int i = 101; i < 1000; ++i)
    {
        int units = i % 10;
        int tens = i % 100 - units;
        int hundreds = i - units - tens;

        m[i] = m[hundreds / 100] + 7 + m[tens + units];
        if (tens + units) //"and" for tens-units
            m[i] += 3;
    }

    int sum = 0;
    for(int i = 1; i <= 1000; ++i)
    {
        sum += m[i];
    }

    std::cout << sum << std::endl;
    return 0;
}
