#include <iostream>
#include <string>
#include <cmath>

using namespace std;




int main()
{
	string binNum;
	int decNum = 0;

	cout << "Provide binary num: ";
	cin >> binNum;

	//5 = 101 = 1*2^2 + 0*2^1 + 1*2^0
	int binLen = binNum.length()-1;
	for(int i = 0; i <= binLen; i++)
	{
		if (binNum[i] == '0')
		{
			decNum = decNum;
		}
		else if (binNum[i] == '1')
		{
			decNum = decNum + pow(2,(binLen-i));
		}
		else
		{
			cout << "Wrong input type!" << endl;
			break;
		}
	}

	cout << binNum << " is equal to " << decNum;


}	

