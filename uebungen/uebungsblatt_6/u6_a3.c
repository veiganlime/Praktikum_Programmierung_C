#include<stdio.h>

void combine(float *Array1, float *Array2, float *Array3);
int main ()
{

	float Array1[10];
	float Array2[10];
	float Array3[20];
	int i;

	for(i=0; i<10; i++)
	{
		Array1[i] = (float)(i+2);
		Array2[i] = (float)(i+1);

	}

	for(i=0; i<10; i++)
	{

		printf("Vorher: Inhalte Fuktion Array1: %.2f und  Array2: %.2f \n", Array1[i], Array2[i]);
	}

	combine(&Array1[0], &Array2[0], &Array3[0]);

	for(i=0; i<20; i++)
	{


		printf("Array3: %.2f  \n", Array3[i]);
	}


	return(0);
}

void combine(float *Array1, float *Array2, float *Array3)
{
	int i;

	for(i=0; i<20; i++)
	{
		if (i<10)
		{

			Array3[i] = Array1[i];

		}
		else
		{
			Array3[i] = Array2[i-10];
		}
	}//for
}
/* Aufgabestellung Zeiger und Arrays - combine()

Erzeugen in der main() Funktion 3 Arrays vom Typ float. Die ersten beiden Arrays umfassen jeweils 10 Speicherplätze, das dritte Array umfast 20 Spaicherplätze.
Reichen sie bitte in der Funktion combine() die beiden ersten Arrays hintereinander in das dritte Arrays ein.
Geben Sie das dritte Arrays in der main() Funktion wieder aus. */
