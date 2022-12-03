#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <algorithm>

using namespace std;




int main()
{
	//5 = 101 = 1*2^2 + 0*2^1 + 1*2^0

	int numDec, s;
	int arr[100];

	cout << "Provide a number ";
	cin >> numDec;

	int i = 0;

	do {
		i++;
		cout << i << endl;
		arr[i] = numDec % 2;
		numDec = numDec / 2;
		s = 2 * numDec + arr[i];
	} while (s >= 2);
	
	cout << "Your num to binary is:" << endl;
	for (; i > 0; i--) 
	{
		cout << arr[i];
	}

}	

