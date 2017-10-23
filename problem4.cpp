#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
	cout << "Høyeste palindrome av 3-sifrede tall" << endl;
	
	vector<int> palindrome;
	int produkt = 0;
	for(int i = 999; i > 99; i--)
	{
		for(int j = 999; j > 99; j--)
		{
			produkt = j * i;
	
			string produktet = to_string(static_cast<int>(produkt));
			if((produktet[0] == produktet[5]) && (produktet[1] == produktet[4]) && (produktet[2] == produktet[3]))
			{
				palindrome.push_back(produkt);
			}
		}
	}
	
	int maxPalindrome = 0;
	cout << "Mulige palindromer: " << endl;
	for(int i = 0; i < palindrome.size(); i++)
	{
		if(palindrome[i] > maxPalindrome)
			maxPalindrome = palindrome[i];
		
		cout << "Mulig palindrome: " << palindrome[i] << endl;
	}

	cout << "\n\nDen høyeste palindromen er: " << maxPalindrome << endl;
}