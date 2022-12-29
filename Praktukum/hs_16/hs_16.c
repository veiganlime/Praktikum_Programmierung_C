#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)


struct Geo
{
	double dLatitude;
	double dLongitude;
	float fAltitude;
};

struct Messwert
{
	int iMessungNummer;
	double dLuftdruck;
	float fTemperatur[3];
	struct Geo Position;
};
struct Messwert set_mw (int MesswertStruktur)
{
	struct Messwert messung = {1.0,5.0,{8.2,8.4,8.5},{10.2,12.2,13.2}};
	return (messung);

};
void Ausgabe_p (struct  Messwert *mssng)
{
	printf("\n_______________\n");
	printf("\nAusgabe_p:MessungNummer: %d  \n", mssng->iMessungNummer);
	printf("\nAusgabe_p:dLuftdruck: %.2f  \n", mssng->dLuftdruck);

	for(int i=0; i<3; i++)
	{
		printf("\nAusgabe_p:fTemperatur[%d]: %.2f  \n", i, mssng->fTemperatur[i]);
	}

	int Groesse1= sizeof((*mssng));
	int Groesse2= sizeof(mssng->Position);

	printf("\nAusgabe_p:Size of Array %d byte\n \nSize of Array.Position %d byte \n", Groesse1, Groesse2);

	mssng->fTemperatur[1] = 100.0f;

		printf("Ausgabe_p:Veraenderte Wert fTemperatur[1]: %f \n", mssng->fTemperatur[1]);
	printf("\nAusgabe_p:Position.dLatitude: %.2f  \n", mssng->Position.dLatitude);
	printf("\nAusgabe_p:Position.dLongitude: %.2f  \n", mssng->Position.dLongitude);
	printf("\nAusgabe_p:Position.fAltitude: %.2f  \n", mssng->Position.fAltitude);
	printf("\n_______________\n");
}
void Ausgabe (struct  Messwert mssng)
{
	printf("\n_______________\n");
	printf("\nAusgabe:MessungNummer: %d  \n", mssng.iMessungNummer);
	printf("\nAusgabe:dLuftdruck: %.2f  \n", mssng.dLuftdruck);

	for(int i=0; i<3; i++)
	{
		printf("\nAusgabe:fTemperatur[%d]: %.2f  \n", i, mssng.fTemperatur[i]);
	}

	int Groesse1= sizeof(mssng);
	int Groesse2= sizeof(mssng.Position);

	printf("\nAusgabe:Size of Array %d byte\n \nSize of Array.Position %d byte \n", Groesse1, Groesse2);

	mssng.fTemperatur[1] = 100.0f;

		printf("Veraenderte Wert fTemperatur[1]: %f \n", mssng.fTemperatur[1]);
	printf("\nAusgabe:Position.dLatitude: %.2f  \n", mssng.Position.dLatitude);
	printf("\nAusgabe:Position.dLongitude: %.2f  \n", mssng.Position.dLongitude);
	printf("\nAusgabe:Position.fAltitude: %.2f  \n", mssng.Position.fAltitude);
	printf("\n_______________\n");
}


int main()
{
	struct Messwert messung = set_mw(1);

	Ausgabe(messung);
	Ausgabe_p(&messung);

	printf("Veraenderte Wert fTemperatur[1]: %f \n", messung.fTemperatur[1]);

    return(0);
}


