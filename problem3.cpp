#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	vector<int> primtall;
	vector<int> faktorer;
	unsigned long tallet = 600851475143;
	
	// Legger primtall under 10 000 i vector
	primtall.push_back(2);
	primtall.push_back(3);
	for (int i=2; i<10000; i++)
	{
		for (int j=2; j*j<=i; j++)
		{
			if (i % j == 0) 
			{
				break;
			}
			else if (j+1 > sqrt(i)) 
			{
				primtall.push_back(i); // putter primtall i vector
			}
		} 
	}
	
	// faktorerer tallet i start ved å iterere vector primtall
	for(int i = 0; i < primtall.size(); i++)
	{
		while(tallet % primtall[i] == 0)
		{
			faktorer.push_back(primtall[i]);
			tallet = tallet / primtall[i];
		}
	}
	
	// gjennomgår lagrede faktorer og finner den største
	int maxFaktor = 0;
	cout << "600851475143 = ";
	for(int i = 0; i < faktorer.size(); i++)
	{
		if(faktorer[i] > maxFaktor)
			maxFaktor = faktorer[i];
		
		if(i == 0) // hvis første faktor, dropp " * " i print
			cout << faktorer[i];
		else
			cout << " * " << faktorer[i];
	}
	
	cout << "\n\nDen Største faktoren er: " << maxFaktor << endl; // printer største primfaktor
}

