#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	// a + b = c = 1000
	// c er halvparten av 1000
	// c / b = 1,5625
	// c = 500
	// b = 320
	// a = 180
	
	int a = 3;
	int b = 4;
	int c = 5;
	for(int i = 2; i < 100; i++)
	{
		unsigned int aPow = pow((a * i), 2);
		unsigned int bPow = pow((b * i), 2);
		unsigned int cPow = pow((c * i), 2);
		
		cout << aPow << " + " << bPow << " = " << cPow << " [ " << (aPow + bPow + cPow) << " ] " << endl;
		if((aPow + bPow) == cPow)
		{
			if((aPow + bPow + cPow) == 1000)
			{
				cout << (aPow * bPow * cPow) << endl;;
			}
		}
	}
}