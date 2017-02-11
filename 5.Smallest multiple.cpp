#include <iostream>

int main() {
    bool isSmallest = true;

    for (int i = 20; ; ++i)
    {
        isSmallest = true;
        for (int j = 1; j <= 20; ++j)
        {
            if (i % j != 0)
            {
                isSmallest = false;
                break;
            }
        }
        
        if (isSmallest)
        {
            std::cout << "Smallest multiple = " << i;
            break;
        }
    }

    return 0;
}
