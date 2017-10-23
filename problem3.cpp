#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () 
{
	vector<int> primtall;
	vector<int> faktorer;
	unsigned long start = 600851475143;
	unsigned long tallet = 600851475143;
	
	// Legger primtall i vector
	primtall.push_back(2);
	primtall.push_back(3);
    for (int i=2; i<10000; i++)
	{
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
                break;
            else if (j+1 > sqrt(i)) {
                primtall.push_back(i);
            }
        } 
	}
	
	for(int i = 0; i < primtall.size(); i++)
	{
		while(tallet % primtall[i] == 0)
		{
			faktorer.push_back(primtall[i]);
			tallet = tallet / primtall[i];
		}
	}
	
	int maxFaktor = 0;
	cout << start << " = ";
	for(int i = 0; i < faktorer.size(); i++)
	{
		if(faktorer[i] > maxFaktor)
			maxFaktor = faktorer[i];
		
		if(i == 0)
			cout << faktorer[i];
		else
			cout << " * " << faktorer[i];
	}
	
	cout << "\n\nDen Største faktoren er: " << maxFaktor << endl;
}

