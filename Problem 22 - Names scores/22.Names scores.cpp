#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ifstream names_file("names", std::ios::in);

    vector< string > names;
    string str;
    names_file >> str;
    names_file.close();

    map<char, int> abc;
    char alpha = 'A';
    for(int i = 1; i < 27; ++i)
    {
        abc[alpha++] = i;
    }

    string name;
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] == '"') continue;
        if(str[i] == ',')
        {
            names.push_back(name);
            name = "";
        }
        else
            name.push_back(str[i]);
    }
    names.push_back(name);
    sort(names.begin(), names.end());

    unsigned long sum = 0;
    for(int i = 0; i < names.size(); ++i)
    {
        int tmp = 0;
        for(int j = 0; j < names[i].size(); ++j)
        {
            tmp += abc[names[i][j]];
        }
        sum += (i+1)*tmp;
    }
    cout << sum << endl;
    return 0;
}
