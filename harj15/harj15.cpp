/*********************************************************************
Tehtävä: HARJOITUS 15
Tekijä: Pekka Melgin
PVM: 8.10.2013
Kuvaus:
TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!

Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon (ei välilyäntejä).
a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
(tulostus tyyppiä "cout << mjono1[4];" jne)
b) Ohjelma kääntää annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen näytälle
(tulostus tyyppiä "cout << mjono2;")
c) merkkijono voi olla kuinka pitkä
tahansa (max 100 kirjainta).
Syätetyn merkkijonon pituutta ei saa
laskea millään kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen käyttäjälle.
Välilyännit jonossa ovat sallittuja.

Käyttäjä syättää jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA
*********************************************************************/
#include <iostream>
#include <string.h>
using namespace std; 
int main() 
{
	// A ja B-kohdat: char mjono2[18] = {0};
	const int pituus = 101;
	char mjono2[pituus];
	// A ja B-kohdat: const int pituus = 18;
	char mjono[pituus];
	int ind = 100;
	int ind2 = 0;
	cout << "Anna 17 merkkiä pitkä merkkijono (ei välilyöntejä): ";
	cin.get(mjono,101);
	while (ind >= 0) {
		//cout << mjono[ind];
		mjono2[ind2] = mjono[ind];
		ind--;
		ind2++;
	}
	cout << mjono2;
}