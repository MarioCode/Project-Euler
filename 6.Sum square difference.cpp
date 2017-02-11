#include "math.h"
#include <iostream>

using namespace std;

int main() {

    long long int sum = 0, sumSQ = 0;
    int N = 0;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        sumSQ += pow(i, 2);
        sum += i;
    }

    cout << (int)pow(sum, 2) - sumSQ;

    return 0;
}
