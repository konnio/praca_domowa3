// Cwiczenia 12.01.2018
// Cwiczenie 2
// e do x
// ze wzoru taylora
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define DOKLADNOSC 50

// "atof" zamienia string na zmienna typu float

int main(int liczba_slow, char *tabela_slow [])
{
	double x;
	double wynik = 1.0;
	double potega_x = 1.0;
	double silnia = 1;
	
	
	if (liczba_slow == 2){ // pierwszy parametr to nazwa programu

		x = atof(tabela_slow[1]);
	
		for (int licznik = 1; licznik < DOKLADNOSC; ++licznik)
		{	
			potega_x *= x;
			silnia *= licznik;
			wynik += potega_x / silnia;
			
		}
		printf("Wynik: %lf\n", wynik);
	} else {
		printf("Niepoprawna liczba parametrow!");
	}
	return 0;
}
