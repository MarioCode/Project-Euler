#include <iostream>

using namespace std;

//It can be converted into as recursion

int Collatz(unsigned long int number)
{
	int count = 1;

	while (number != 1)
	{
		if (number % 2 == 0)
		{
			number /= 2;
		}
		else
		{
			number = (number * 3) + 1;
		}
		count++;
	}

	return count;
}

int main()
{
	int max_len = 0;
	int result_index = 0;

	for (unsigned long int i = 2; i <= 1000000; ++i)
	{
		int cur_len = Collatz(i);

		if (cur_len > max_len)
		{
			max_len = cur_len;
			result_index = i;
		}
	}

	cout << result_index << endl;

	return 0;
}
