// Cwiczenie 3 11.01.2018
// Sprawdzenie wystepowania liter w ciagu
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	char tekst[20] = "ala ma kota";
	int histogram[26] = {0};

		for (j = 0; tekst[j] != 0; j++) // musi byc tekst[j] zeby zatrzymalo sie przy pustym znaku
		{				// zeby wykonal tyle razy ile jest znakow
			if (tekst[j] >= 'a' && tekst[j] <= 'z'){ //jezeli znak jest miedzy 'a' i 'z'
				++histogram[tekst[j] - 'a']; //zwieksza o 1 wartosc przechowywana w tablicy
			}
		}
	
	for (i = 0 ; i < 26 ; i++)   // Wyswietlenie tablicy histogram
		{
		printf("Litera %c wystapila %d razy\n",i+'a',histogram[i]);
		}
	
	return 0;

}
