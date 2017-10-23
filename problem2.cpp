#include <iostream>

int main()
{
	unsigned int tall1 = 1;
	unsigned int tall2 = 2;
	unsigned int lastSum = 2;
	unsigned int total = 0;

	while(lastSum < 4000000)
	{
		if(lastSum % 2 == 0)
		{
			total += lastSum;
		}
		lastSum = tall1 + tall2;

		if(lastSum > 4000000)
			break;

		std::cout << tall1 << " + " << tall2 << " = " << lastSum << std::endl;
		tall1 = tall2;
		tall2 = lastSum;
	}
	
	std::cout << "\n\nTotalen er: " << total << std::endl;
}
