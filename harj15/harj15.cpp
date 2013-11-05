/*********************************************************************
Tehtävä: HARJOITUS 15
Tekijä: Pekka Melgin
PVM: 5.11.2013
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
	//const int pituus = 101;
	char mjono2[100];
	// A ja B-kohdat: const int pituus = 18;
	char mjono[100];
	int ind2 = 0;
	cout << "Anna max 100 merkkia pitka merkkijono: ";
	cin.get(mjono,101);
	int ind = -1;
	int ok = 0;
	while (ok == 0) {
		if (mjono[ind] == NULL) {
			ok++;
		}
		else {
			ind++;
		}
	}
	ind--;
	while (ind >= 0) {
		mjono2[ind2] = mjono[ind];
		ind--;
		ind2++;
	}
	mjono2[ind2] = NULL;
	if (strcmp(mjono,mjono2)==0) {
		cout << "Kyl on palindromi." <<endl << mjono2 <<endl;
	}
	else {
		cout << "Ei ole palindromi" <<endl << mjono2 <<endl;
	}
}