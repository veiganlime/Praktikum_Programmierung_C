#include<stdio.h>

int main (){
	char c;
	int i;
	long l;
	float f;
	double d;
	
	printf("Size of int: %d \n", sizeof(i));
	printf("Size of double: %d \n", sizeof(d));
	printf("Size of float: %d \n", sizeof(f));
	printf("Size of long: %d \n", sizeof(l));
	printf("Size of char: %d \n", sizeof(c));

	int a, b, Differenz;
	float e;
	a = 1234567890;
	e = a;
	b = e;
	Differenz = b - a;

	printf("Erste Int_Wert %i \n", a);
	printf("Zweite Int_Wert %i \n", b);
	printf("Differenz ist %i \n", Differenz);
	
	float f1;
	f1 = 0.4;
	printf("Float mit 12 NAchkommastellen: %1.12f \n", f1);








  return(0);
}
