#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <algorithm>

using namespace std;

int main()
{
	bool array[1000];
	unsigned int i, w, count;

	cout << "Range in i should look for prime numbers? ";
	cin >> count;
	cin.ignore();

	if (count > 1000)
		cout << "Num is too high..." << endl;
	else
	{
		for (i = 2; i <= count; i++)
			array[i] = true;

		for (i = 2; i <= count; i++)
		{
			if ((i != 2) && (i % 2 == 0))
				i++;

			w = i + i;
			while (w <= count)
			{
				array[w] = false;
				w += i;
			}
		}
		for (i = 2; i <= count; i++)
			if (array[i])
				cout << i << ", ";
	}
	
}

