#include <iostream>
#include <string>

using namespace std;


int main()
{
	int dec[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 }; 
	string rome[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

	int n, r;

	cout << "Give me a number: ";
	cin >> n;

	if (n < 0)
		return 0;

	cout << "Roman representation of " << n << " is ";

	for(r=0; n>0;)
	{
		if (n >= dec[r])
		{
			cout << rome[r];
			n -= dec[r];
		}
		else
			r++;
			
	}
	
}




