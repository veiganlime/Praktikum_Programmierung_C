
#include<stdio.h>
#include<math.h>

//Deklaration der Funktioan sub()
double sub(double a, double b);

int main() {
	
	double a = 11.0;
	double b = 2.0;

	double ergebnis;

	ergebnis = sub(a,b);
	
	printf("Ergebnis von Wurzel (a-b): %f \n ", ergebnis);
  
  return(0);

}
//Definition Der Funktion sub()
double sub(double a, double b) {
	
	double lockalErgebnis;
	lockalErgebnis = sqrt(a-b);

  return(lockalErgebnis);
}



















