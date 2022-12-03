#include <iostream>
#include <string>

using namespace std;


void checkPasswd(string);

int main()
{
	//intelligent password has a special char, num, big char, small char;

	string passwd;
	char choice = 'z';
	do {
		cout << "Provide a password to check if it's intelligent: ";
		cin >> passwd;
		checkPasswd(passwd);
		while (choice != 'y' || choice != 'n') 
		{
			cout << "Do you want to continue (y/n)? ";
			cin >> choice;
			if (choice == 'y')
			{
				system("cls");
				break;
			}
			else if (choice == 'n')
				break;
			else
			{	
				system("cls");
				cout << "I don't understand!" << endl; 
			}
				
		}
	} while (choice !='n');
	
}

void checkPasswd(string passwd)
{
	int specialChar = 0, num = 0, bigChar = 0, smallChar = 0;
	for (int i = 0; i < passwd.length(); i++)
		if (passwd[i] >= 32 && passwd[i] <= 47 || passwd[i] >= 58 && passwd[i] <= 64 || passwd[i] >= 91 && passwd[i] <= 96 || passwd[i] >= 123 && passwd[i] <= 126)
			specialChar++;
		else if (passwd[i] >= 48 && passwd[i] <= 57)
			num++;
		else if (passwd[i] >= 65 && passwd[i] <= 90)
			bigChar++;
		else if (passwd[i] >= 97 && passwd[i] <= 122)
			smallChar++;
	if (specialChar != 0 && num != 0 && bigChar != 0 && smallChar != 0)
		cout << "This password is intelligent!";
	else
		cout << "This password is stupid!";
}



