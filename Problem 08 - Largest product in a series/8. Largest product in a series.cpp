#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	ifstream numbers_file("8.Euler.txt", ios::in);

	long long int multi = 1;
	long long int max_mult = 0;

	int n = 0;
	int adjacent = 13;

    vector<int> X(1000);

    while (!numbers_file.eof())
		numbers_file >> X[n++];
    numbers_file.close();

	for (int i = 0; i < X.size() - adjacent; ++i)
	{
		multi = 1;
		for (int j = 0; j < adjacent; ++j)
		{
			multi *= X[i + j];
		}

		if (multi > max_mult)
			max_mult = multi;
	}

	cout << max_mult << endl;

    return 0;
}
