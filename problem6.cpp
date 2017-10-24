#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned int kvadraterSammenlagt = 0;
	unsigned int sammenlagtKvadrat = 0;
	unsigned int differanse = 0;
	
	// for-looper til 10 og regner ut kvadratene av hvert tall
	// og kvadratet av hvert tall sammenlagt

	int i = 1;
	for(; i <= 100; i++)
	{
		kvadraterSammenlagt += pow(i, 2);
		sammenlagtKvadrat += i;
	}
	sammenlagtKvadrat = pow(sammenlagtKvadrat, 2);
	
	differanse = sammenlagtKvadrat - kvadraterSammenlagt;
	
	cout << "Følgende resultater for tallrekke på " << i-1 << ":" << endl;
	cout << "Kvadrater sammenlagt: " << kvadraterSammenlagt << endl;
	cout << "Kvadratet av summen: " << sammenlagtKvadrat << endl;
	cout << "Differansen mellom de (" << sammenlagtKvadrat << " - " << kvadraterSammenlagt << "): "
		<< differanse << endl;

}