#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream numbers_file("grid", ios::in);

    unsigned int multi = 1;
    unsigned long max_mult = 0;

    vector< vector<int> > vgrid(20);
    for(int i = 0; i < 20; ++i)
        vgrid[i] = vector<int>(20);

    int i = 0, j = 0;
    while (!numbers_file.eof())
    {
        numbers_file >> vgrid[j][i++];
        if (i == 20)
        {
            i = 0;
            j++;
        }
    }
    numbers_file.close();

    //down
    for(int i = 0; i < 20 - 3; ++i)
    {
        for(int j = 0; j < 20; ++j)
        {
            multi = 1;
            for(int k = 0 ; k < 4; ++k)
                multi *= vgrid[i + k][j];
            if (multi > max_mult)
                max_mult = multi;
        }
    }

    //right
    for(int i = 0; i < 20; ++i)
    {
        for(int j = 0; j < 20 - 3; ++j)
        {
            multi = 1;
            for(int k = 0 ; k < 4; ++k)
                multi *= vgrid[i][j + k];
            if (multi > max_mult)
                max_mult = multi;
        }
    }

    //diagonal-right
    for(int i = 0; i < 20 - 3; ++i)
    {
        for(int j = 0; j < 20 - 3; ++j)
        {
            multi = 1;
            for(int k = 0 ; k < 4; ++k)
                multi *= vgrid[i + k][j + k];
            if (multi > max_mult)
                max_mult = multi;
        }
    }
    //diagonal-left
    for(int i = 0; i < 20 - 3; ++i)
    {
        for(int j = 3; j < 20; ++j)
        {
            multi = 1;
            for(int k = 0 ; k < 4; ++k)
                multi *= vgrid[i + k][j - k];
            if (multi > max_mult)
                max_mult = multi;
        }
    }

    cout << max_mult << endl;
    return 0;
}
