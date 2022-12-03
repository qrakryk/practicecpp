#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <algorithm>

using namespace std;

/*

Horner method aims to simplify polynomials

5x^4 + 2x^3 + x^2 + 10x + 4

(5x^3 + 2x^2 + x + 10)x + 4

((5x^2 + 2x + 1)x + 10)x + 4

(((5x + 2)x + 1)x + 10)x + 4

*/

int hornerRecursive(int n);

int n;
vector<int> vec;
int x;

int main()
{
	cout << "Provide degree of polynomial: ";
	cin >> n;

	
	//vec.reserve(10);

	int tmp;
	for (int i = 0; i <= n; i++)
	{
		cout << "vec[" << i << "] = ";
		cin >> tmp;
		vec.push_back(tmp);
	}

	cout << "Provide x: ";
	cin >> x;

	cout << "Solution is: " << hornerRecursive(n) << endl;
	
}

//5*x = y;
//(y + 2)x = y
//(y + 1)x = y
//(y + 10)x = y  
//y + 4 = y
//y - solution
int hornerRecursive(int n)
{
	if (n == 0)
		return vec[n] * x;
	else
		return hornerRecursive(n-1)*x + vec[n];
}

