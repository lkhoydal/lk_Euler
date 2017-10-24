#include <iostream>

using namespace std;

int main()
{
	bool erDelbar = false;
	unsigned int tall = 2520;
	
	cout << "\nSjekker hvilket tall som er delbart på alle tall mellom- og inkludert 1 og 20" << endl;
	while(!erDelbar)
	{
		tall++;
		for(int i = 1; i <= 20; i++)
		{
			if(!(tall % i == 0))
				break;
			else if(tall % i == 0)
			{
				if(20 == i)
					erDelbar = true;
			}
		}
	}
	
	cout << "Tallet er: " << tall << endl;
}