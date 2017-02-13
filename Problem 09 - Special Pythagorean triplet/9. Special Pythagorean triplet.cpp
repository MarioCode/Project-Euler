#include <iostream>

using namespace std;

int main() {

    for (int a = 1; ; ++a)
	{
		for (int b = a + 1; ; ++b)
		{
			int c = (1000 - a - b);

			if (a*a + b*b == c*c)
			{
				cout << "A = " << a << " B = " << b << " C = " << c << endl;
				cout << "Result (A*B*C) = " << a * b * c << endl;
				return 0;
			}
			else if (c <= b || a + b + c > 1000)
			{
				break;
			}
		}
	}

	return 0;
}
