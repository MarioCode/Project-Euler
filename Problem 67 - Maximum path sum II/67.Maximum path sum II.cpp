#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    std::ifstream numbers_file("triangle", std::ios::in);

    vector< vector<int> > triag(100);
    for(int i = 0; i < 100; ++i)
    {
        triag[i] = vector<int>(i+1);
        for(int j = 0; j <= i; ++j)
        {
            int tmp;
            numbers_file >> tmp;
            triag[i][j] = tmp;
        }
    }
    numbers_file.close();

    for(int i = triag.size() - 2; i >= 0; --i)
    {
        for(int j = 0; j < triag[i].size(); ++j)
        {
            int max = (triag[i+1][j] > triag[i+1][j+1]) ? triag[i+1][j] : triag[i+1][j+1];
            triag[i][j] += max;
        }
    }

    cout << triag[0][0] << endl;
    return 0;
}
