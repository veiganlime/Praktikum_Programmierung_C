#include<stdio.h>
#include<stdlib.h>

int i5;

int main()
{
int i1, i2, i3;
int *AVi1, *AVi2, *AVi3, *AVi4, *AVi5; /*Adresse von i*/
static int i4;

int *i6;
 i6= NULL;

AVi1 = &i1;
AVi2 = &i2;
AVi3 = &i3;
AVi4 = &i4;
AVi5 = &i5;


printf("Adressen von Variablen i1: %p, i2: %p, i3: %p \n", AVi1, AVi2, AVi3);
printf("Adresse von 'static int' i4: %p \n", AVi4);
printf("Adresse von 'global int' i5: %p \n", AVi5);
printf("i6: %p \n",&i6);
printf("i6: %p \n",i6);

return(0);
}

/*Aufgabestellung_Zeiger_Zuweisung von Werten an Zeigervariablen

*Legen Sie ein neues Projekt hs_9 an und definieren Sie innerhalb von main() drei int-Variablen i1, i2 und i3 und lassen Sie sich mit printf() die Adressen der Variablen anzeigen. 
* Ergaenzen Sie eine vierte Variable i4 vom Typ static int und lassen Sie sich die Adresse mit printf() anzeigen
*Ergaenzen Sie eine globale Variable i5 gleichen Typs und zeigen Sie die Adresse an

[Als Kennzeichen fuer einen "leeren" oder uninitialisierten Pointer wird ueblicherweise der Wert NULL verwendet.]
* Ergaenzen Sie eine Zeigervariable i6 vom Typ " Zeiger auf int"und weisen Sie dieser Variablen den Wert NULL zu!
*/

