#include<stdio.h>
#include<stdlib.h>

float Add(double a, double b);


int main ()
{
	double *Z1, *Z2;
	float f;
	Z1=(double*) malloc(sizeof(*Z1));
	Z2=(double*) malloc(sizeof(*Z2));


	*Z1 = 0.5;
	*Z2 = 0.8;

	printf("*Zeiger1: Inhalt: %1.3f Adresse: %p \n", *Z1, Z1);
	printf("*Zeiger2: Inhalt: %1.3f Adresse: %p \n", *Z2, Z2);

	f = Add(*Z1, *Z2);

	printf("Ergebnis: %f \n", f);

	free(Z1);
	free(Z2);


	return(0);
}
float Add(double a, double b)
{
	float f;
	f = (float) (a+b);
	return (f);
}
