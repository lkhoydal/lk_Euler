#include <stdio.h>
#include <time.h>

int main()
{
	clock_t start_s = clock();
	
	int erDelbar = 0;
	unsigned int tall = 2520;
	
	printf("\nSjekker hvilket tall som er delbart på alle tall mellom- og inkludert 1 og 20\n");
	
	while(!erDelbar == 1)
	{
		tall++;
		for(int i = 1; i <= 20; i++)
		{
			if(!(tall % i == 0))
				break;
			else if(tall % i == 0)
			{
				if(20 == i)
					erDelbar = 1;
			}
		}
	}
	
	printf("Tallet er: %i\n", tall);
	
	clock_t stop_s = clock();
	double tid = (double)(stop_s - start_s)/CLOCKS_PER_SEC*1000;
	printf("Runtime (ms): %f\n", tid);
	
	return 0;
}