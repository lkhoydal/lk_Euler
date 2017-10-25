#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	clock_t start_s = clock();
	unsigned long long sumPrim = 5; // utgangspunkt for summering;
	for(int i = 2; i < 2000000; i++)
	{
		for(int j = 2; j*j <= i; j++)
		{
			if(i % j == 0)
			{
				break;
			}
			else if(j+1 > sqrt(i))
			{
				sumPrim = sumPrim + i;
			}				
		}
	}
	
	printf("Summen av primtall under 2000000 er:\n%llu", sumPrim); 
	
	clock_t stop_s = clock();
	double tid = (double)(stop_s - start_s)/CLOCKS_PER_SEC;
	printf("\n\nRuntime (s): %f\n", tid);

}