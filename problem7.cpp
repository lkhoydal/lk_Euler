#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	int antallPrimtall = 2;
	for (int i=2; i<INT_MAX; i++)
	{
		for (int j=2; j*j<=i; j++)
		{
			if (i % j == 0) 
			{
				break;
			}
			else if (j+1 > sqrt(i)) 
			{
				antallPrimtall++;
				if(antallPrimtall == 10001)
				{
					cout << "Primtall no. 10 001: " << i << endl;
					break;
				}
			}
		} 
	}
}