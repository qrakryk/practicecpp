#include <iostream>
#include <string>
#include <cmath>

using namespace std;


string cipher(string);
string decipher(string);
string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
string cipherCode = "ZYXWVUTSRQPONMLKJIHGFEDCAB-";

int main()
{
	cout << cipher("HEJA HEJA BATEREJA") << endl;
	cout << decipher(cipher("HEJA HEJA BATEREJA")) << endl;
}

string cipher(string word)
{
	for (int i = 0; i < word.length(); i++)
	{
		char tmpChar = word[i];
		for (int j = 0; j < alphabet.length(); j++)
			if (tmpChar == alphabet[j])
			{
				word[i] = cipherCode[j];
			}
	}
	return word;
}

string decipher(string word)
{
	for (int i = 0; i < word.length(); i++)
	{
		char tmpChar = word[i];
		for (int j = 0; j < cipherCode.length(); j++)
			if (tmpChar == cipherCode[j])
			{
				word[i] = alphabet[j];
			}
	}
	return word;
}




