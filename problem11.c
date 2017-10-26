#include <stdio.h>
#include <math.h>
#include <time.h>
#include "problem11.h"

int main()
{
	int maksProdukt = 0; // største funnet produkt;

	clock_t start_s = clock(); // starter timer for runtime

	// Looper gjennom første dimensjon i array
	for(int i = 1; i <= 20; i++)
	{
		// Looper gjennom andre dimensjon av array, med tallrekkene
		for(int j = 1; j < (sizeof(rekke[i])/sizeof(int)); j++)
		{
			int tempRegn = 0;
			if((tempRegn = regnVertikalt(i, j)) > maksProdukt)
			 	maksProdukt = tempRegn;
			if((tempRegn = regnHorisontalt(i, j)) > maksProdukt)
			 	maksProdukt = tempRegn;
			if((tempRegn = regnDiagonaltHoyre(i, j)) > maksProdukt)
			 	maksProdukt = tempRegn;
			if((tempRegn = regnDiagonaltVenstre(i, j)) > maksProdukt)
			 	maksProdukt = tempRegn;
		} // END andre dimensjon for-loop
	} // END første dimensjon for-loop

	printf("Maks produkt: %i\n", maksProdukt);

	clock_t stop_s = clock(); // stopper timer for runtime
	double tid = (double)(stop_s - start_s)/CLOCKS_PER_SEC; // regner runtime i sekunder
	printf("\n\nRuntime (sec): %f\n", tid); // print runtime
} // END MAIN


/*
#### FUNKSJONER ####
*/

// Funksjon for å motta plassering i primær og sekundærarray
// og regne ut produkt horisontalt mot høyre
int regnHorisontalt(int rekkeA, int rekkeB)
{
	int regnTilPosisjon = rekkeB + SIFFER;
	int totalRegning = 0;

	if(regnTilPosisjon <= 20)
	{
		for(; rekkeB <= regnTilPosisjon; rekkeB++)
		{
			if(totalRegning == 0)
				totalRegning = rekke[rekkeA][rekkeB];
			else
				totalRegning *= rekke[rekkeA][rekkeB];
		}
		return totalRegning;
	}
	else
		return 0;
} // END regnHorisontalt


// Funksjon for å motta plassering i primær og sekundærarray
// og regne ut produkt vertikalt nedover
int regnVertikalt(int rekkeA, int rekkeB)
{
	int regnTilRekke = rekkeA + SIFFER;
	int totalRegning = 0;

	if(regnTilRekke <= 20)
	{
		for(; rekkeA <= regnTilRekke; rekkeA++)
		{
			if(totalRegning == 0)
				totalRegning = rekke[rekkeA][rekkeB];
			else
				totalRegning *= rekke[rekkeA][rekkeB];
		}
		return totalRegning;
	}
	else
		return 0;
} // END regnVertikalt


// Funksjon for å motta plassering i primær og sekundærarray
// og regne ut diagonale produkter ned til høyre
int regnDiagonaltHoyre(int rekkeA, int rekkeB)
{
	int regnTilRekke = rekkeA + SIFFER;
	int regnTilPosisjon = rekkeB + SIFFER;
	int totalRegning = 0;

	if((regnTilRekke <= 20) && (regnTilPosisjon <= 20))
	{
		int forskyvning = 0;
		for(; rekkeA <= regnTilRekke; rekkeA++)
		{
			if(totalRegning == 0)
				totalRegning = rekke[rekkeA][rekkeB + forskyvning];
			else
				totalRegning *= rekke[rekkeA][rekkeB + forskyvning];
			forskyvning++;
		}
		return totalRegning;
	}
	else
		return 0;
} // END regnDiagonaltHoyre


// Funksjon for å motta plassering i primær og sekundærarray
// og regne ut diagonale produkter ned til venstre
int regnDiagonaltVenstre(int rekkeA, int rekkeB)
{
	int regnTilRekke = rekkeA + SIFFER;
	int regnTilPosisjon = rekkeB - SIFFER;
	int totalRegning = 0;

	if((regnTilRekke <= 20) && (regnTilPosisjon >= 0))
	{
		int forskyvning = 0;
		for(; rekkeA <= regnTilRekke; rekkeA++)
		{
			if(totalRegning == 0)
				totalRegning = rekke[rekkeA][rekkeB - forskyvning];
			else
				totalRegning *= rekke[rekkeA][rekkeB - forskyvning];
			forskyvning++;
		}
		return totalRegning;
	}
	else
		return 0;
} // END regnDiagonaltHoyre
