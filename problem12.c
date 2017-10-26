#include <stdio.h>
#include <time.h>

int main()
{
  int triangelTall = 0;

  clock_t start_s = clock();

  // WHILE antallGangerDelt < 501
  // FOR j = triangeltall og antallGangerDelt++

  for(int i = 1; i <= 500000; i++)
  {
    int antallGangerDelt = 0; // resetter for hver iterasjon
    triangelTall += i; // Legger på triangelTall

    // Sjekker delbare tall for triangelTall
    for(int j = triangelTall; j > 0; j--)
    {

    }
  }

  clock_t stop_s = clock();
  double tid = (double)(stop_s - start_s)/CLOCKS_PER_SEC;
  printf("\nRuntime (sec): %f\n", tid);
}
