#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
	cout << "Høyeste palindrome av 3-sifrede tall" << endl;
	
	int palindrome = 0;
	int produkt = 0;
	for(int i = 999; i > 99; i--)
	{
		for(int j = 999; j > 99; j--)
		{
			produkt = j * i;
	
			string produktet = to_string(static_cast<int>(produkt));
			if((produktet[0] == produktet[5]) && (produktet[1] == produktet[4]) && (produktet[2] == produktet[3]))
			{
				palindrome = produkt;
				break;
			}
			if(palindrome > 0)
				break;
		}
	}
	
	cout << "\n\nHøyeste palindrome er: " << palindrome << endl;
}