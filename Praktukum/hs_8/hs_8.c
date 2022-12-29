#include<stdio.h>

int main(){
	
	char *pC, c;
	float *pF, f;
	double *pD, d;
	long double *pLD, ld;

	float C, F, D, LD;
	C = sizeof(pC);
	F = sizeof(pF);
	D = sizeof(pD);
	LD = sizeof(pLD);
	
	c = sizeof(c);
	f = sizeof(f);
	d = sizeof(d);
	ld = sizeof(ld);
	
	printf("Zeiger auf char: %f ,\n Zeiger auf float %f ,\n Zeiger auf double %f ,\n Zeiger auf long double %f \n", C, F, D, LD);
	printf(" Variable von char: %f ,\n Variable von  float %f ,\n Variable von double %f ,\n Variable von long double %f \n", c, f, d, ld);

  return(0);
}
