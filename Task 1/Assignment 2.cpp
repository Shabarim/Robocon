#include <iostream>
using namespace std;

int main()
{
	int number;
	int digitCount[10] = {0};

	cout << "Enter a number: ";
	cin >> number;

	if (number == 0)
	{
		digitCount[0] = 1;
	}
	else
	{
		while (number > 0)
		{
			int digit = number % 10;
			digitCount[digit]++;
			number /= 10;
		}
	}

	cout << "Digit counts:" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (digitCount[i] > 0)
		{
			cout << i << " appears " << digitCount[i] << " time(s)" << endl;
		}
	}

	return 0;
}
