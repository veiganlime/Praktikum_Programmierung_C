

#include<stdio.h>
#include<math.h>

//Deklaration der Funktioan sub()
double sub(double a, double b);

int main() {
	
	double a = 11.0;
	double b = 2.0;

	double ergebnis;

	ergebnis = sub(a,b);
	
	if (ergebnis >= 0.0) {
	printf("Ergebnis von Wurzel (a-b): %f \n ", ergebnis);
  	}
	else {
	printf("Es existiert kein sinnvolles Ergebnis");
	}
  return(0);

}
//Definition Der Funktion sub()
double sub(double a, double b) {
	
	double lockalErgebnis;
	if ((a-b) >= 0.0) {

		lockalErgebnis = sqrt(a-b);
	
  		return(lockalErgebnis);
	}	
	else {
		printf("Wurzelargument ist kleiner als 0.0 und kann nicht berechnet werden\n");	
	
	       	return(-1.0);
	}

  return(lockalErgebnis);
}






