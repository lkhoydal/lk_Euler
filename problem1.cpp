#include <iostream>

int main()
{
	int sum = 0;
	for(int i = 1; i < 1000; i++)
	{
   		if(i % 3 == 0)
		{
			std::cout << i << std::endl;
			sum += i;
		}

		else if(i % 5 == 0)
		{
			std::cout << i << std::endl;
			sum += i;
		}
	}
	std::cout << "\n\nSummen er: " << sum << std::endl;
}
