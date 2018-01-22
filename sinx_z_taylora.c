// Cwiczenia 12.01.2018
// Praca domowa nr 3
// sin x
// ze wzoru taylora
// Konrad Mojski
//
// sinx = x - x^3/ + x^5/5! - ...
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define DOKLADNOSC 4

// "atof" zamienia string na zmienna typu float

int main(int liczba_slow, char *tabela_slow [])
{
	double x;
	double wynik = 1.0;
	double potega_x = 1.0;
	double silnia = 1;
	double znak = 1; // zmienna pozwala na zmianę znaku we wzorze
	
	
	if (liczba_slow == 2){ // pierwszy parametr to nazwa programu

		x = atof(tabela_slow[1]);
		potega_x = x;
		for (int licznik = 1; licznik < DOKLADNOSC; ++licznik)
		{	
			printf("Licznik: %d\n", licznik);
			wynik += znak * (potega_x / silnia);
			printf("wynik: %f\n", wynik);
			znak *= (-1.0);
			printf("znak: %f\n", znak);
			potega_x *= x * x;
			printf("potega_x: %f\n", potega_x);
			silnia *= (licznik+1) * (licznik+2);
			printf("silnia: %f\n", silnia);
		}
		printf("Wynik: %lf\n", wynik);
	} else {
		printf("Niepoprawna liczba parametrow!");
	}
	return 0;
}
