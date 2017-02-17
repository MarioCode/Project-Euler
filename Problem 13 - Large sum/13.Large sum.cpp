#include <iostream>
#include <fstream>

int main()
{
    std::ifstream numbers_file("numbers", std::ios::in);

    double num[100];

    int i = 0;
    while (numbers_file >> num[i++]){ }

    numbers_file.close();

    double sum = 0;
    for(int i = 0; i < 100; ++i)
        sum += num[i];

    std::cout.setf(std::ios::fixed);
    std::cout << sum << std::endl;
    return 0;
}
