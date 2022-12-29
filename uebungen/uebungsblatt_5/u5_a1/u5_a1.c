#include<stdio.h>
//Variablen in der Output -Funktion uebergeben
void Output( float a, double b, int c, float *app, double *bpp, int *cpp)
{
	printf("Zeiger haben die Inhalte um 1 inkrementiert und die Variablen und Zeiger sollten jeweils die neuen Ergebnisse ausgeben \n");
	printf("Variable a = %f \n ", a);
	printf("Variable b = %f \n ", b);
	printf("Variable c = %d \n ", c);

	printf("Variable *ap = %f \n ", *app);
	printf("Variable *bp = %f \n ", *bpp);
	printf("Variable *cp = %d \n ", *cpp);
	return;

}

int main ()
{
	//Deinition der Variablen
	float  a;
	double b;
	int    c;
	//Definition  der Adressvariablen/ Zeiger*
	float  *ap;
	double *bp;
	int    *cp;
	//Initialisierung der Variablen
	a = 1.0;
	b = 2.0;
	c = 3;

	//Kontrolausgabe
	printf("Variable a = %f \n ", a);
	printf("Variable b = %f \n ", b);
	printf("Variable c = %d \n ", c);

//	printf("Variable *ap = %f \n ", *ap);
//	printf("Variable *bp = %f \n ", *bp);
//	printf("Variable *cp = %d \n ", *cp);

	//Zeiger sollen auf die jeweiligen Variablen zeigen
	ap = &a;
	bp = &b;
	cp = &c;
	printf("Zeiger sollen jetzt auf die gueltigen Variablenspeicherplaetze zeigen \n");
	printf("Variable *ap = %f \n ", *ap);
	printf("Variable *bp = %f \n ", *bp);
	printf("Variable *cp = %d \n ", *cp);

	//Inkrementieren der Speicherplatzinhalte durch die Zeiger
	*ap = *ap + 1.0;
	*bp = *bp + 1.0;
	*cp = *cp + 1.0;

	Output(a, b, c, ap, bp, cp);
	return(0);
}

