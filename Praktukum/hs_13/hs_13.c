#include<stdio.h>
#include<stdlib.h>
int main()
{

	int var;
	int *pvar;
	long int  Differenz;
	long double Differenz1;
	char Differenz2;

	pvar = &var;
	pvar = pvar + 1;
	*pvar = 123;

	Differenz = pvar -  &var;
	Differenz1 = pvar -  &var;
	Differenz2 = pvar -  &var;

	printf("long int Differenz zwischen var und pvar: %ld \n", Differenz);
	printf("long double Differenz zwischen var und pvar: %Lf \n", Differenz1);
	printf("char Differenz zwischen var und pvar: %d \n", Differenz2);

	printf("Adresse von 'var' %p \n", &var);
	printf("Adresse von 'pvar' %p \n", pvar);


	return(0);
}
