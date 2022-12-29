#include<stdio.h>

void Add(int *Array1, int *Array2);
int main ()
{

	int Array1[10];
	int Array2[10];
	int i;

	for(i=0; i<10; i++)
	{
		Array1[i] = i-11;
		Array2[i] = i+1;

	}

	for(i=0; i<10; i++)
	{

		printf("Vorher: Inhalte Fuktion Array1: %d  Array2: %d \n", Array1[i], Array2[i]);
	}

	Add(&Array1[0], &Array2[0]);

	for(i=0; i<10; i++)
	{


		printf("Die Summe von Array1 und Array2: %d  \n", Array1[i]);
	}


	return(0);
}

void Add(int *Array1, int *Array2)
{
	int i;

	for(i=0; i<10; i++)
	{

	Array1[i] = Array1[i] + Array2[i];



	}


}



/* Aufgabestellung_Zeiger und Arrays - add()

Erzeugen Sie zwei Arrays mit jeweils 10 Speicherplätzen in der main() Funktion, füllen diese mit den Werten -11, -10... bzw. 1,2,3... und addieren Sie die Arrays in einer Funktion add().
Geben Sie das Ergebnis in der main() Funktion aus. Belegen Sie so wenig wie möglich Speicherplatz in dem gesamten Programm */
