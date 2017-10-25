#include <stdio.h>
#include <time.h>

int main() 
{
	clock_t start_s = clock(); // starttidspunkt
	
	// i = c, j = b, k = a
	// code
	for(double i = 1000; i > 0; i--)
	{	
		for(double j = 1000; j > 0; j--)
		{
			for(double k = 1; k <= 1000; k++)
			{
				if((k < j) && (j < i))
				{
					if((k*k) + (j*j) == (i*i))
					{
						if((k + j + i) == 1000)
						{
							printf("Potensielt resultat: a = %f, b = %f, c = %f\n", k, j, i);
							int produkt = (int)k*(int)j*(int)i;
							printf("Potensielt produkt: %i\n", produkt);
						}
					}
				}
			}
		}
	}
	
	clock_t stop_s = clock(); // stoptidspunkt
	
	double tid = (double)(stop_s - start_s)/CLOCKS_PER_SEC;
	printf("\nRuntime (sec): %f\n", tid); // print runtime
}