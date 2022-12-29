#include<stdio.h>
int main(){

	double Zinsen, StartKapital, Zinssatz, AufsummierteKapital;
	int i, AnzahlVonJahren;

	AufsummierteKapital = 0.0;


	double zinsen ( double Zinssatz,  double Startkapital)
		{
			return (((StartKapital*Zinssatz)/100));
		}

	printf("Geben Sie Startkapital ein:");
	scanf("%lf", &StartKapital);

	printf("Geben Sie jaerliche Zinsatz ein:");
	scanf("%lf", &Zinssatz);

	printf("Geben Sie Anzahl von Jahren ein!");
	scanf("%d", &AnzahlVonJahren);

	printf("___________________________________  \n");
	printf("|Jahre	|Zinsens	|Aufsummierte Kapital|  \n");
	for (i=1; i<=AnzahlVonJahren; i++)
	{
		Zinsen = zinsen(Zinssatz, StartKapital);
		AufsummierteKapital = AufsummierteKapital + StartKapital  + Zinsen;

		printf("|%d	|%.2f		|%.2f|  \n", i, Zinsen, AufsummierteKapital);
	}

	printf("|___________________________________|  \n");

  return(0);
}
