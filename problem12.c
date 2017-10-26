#include <stdio.h>
#include <time.h>

int main()
{
  unsigned long long triangelTall = 0;
	int maksDeling = 0;

  clock_t start_s = clock();

  // WHILE antallGangerDelt < 501
  // FOR j = triangeltall og antallGangerDelt++
	int antallGangerDelt = 0; // resetter for hver iterasjon
	int i = 1;
  while(antallGangerDelt < 501)
  {
		antallGangerDelt = 1;
    triangelTall += i; // Legger på triangelTall

    // Sjekker delbare tall for triangelTall
		for(int j = 1; j <= ((triangelTall/2)+1); j++)
		{
			if(triangelTall % j == 0)
			{
				antallGangerDelt++;
			}
		}
		if(antallGangerDelt > maksDeling)
		{
			clock_t temp_s = clock();
			double tempTid = (double)(temp_s - start_s)/CLOCKS_PER_SEC;
			maksDeling = antallGangerDelt;
			printf("Runtime (sec): %f // Høyeste delingstall så langt: %i // %llu\n", tempTid, maksDeling, triangelTall);
		}
		i++;
  }
	
	printf("Triangeltall med over 500 dividenter er: %llu\n", triangelTall);

  clock_t stop_s = clock();
  double tid = (double)(stop_s - start_s)/CLOCKS_PER_SEC;
  printf("\nTotal runtime (sec): %f\n", tid);
}
