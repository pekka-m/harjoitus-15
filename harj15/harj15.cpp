/*********************************************************************
Teht�v�: HARJOITUS 15
Tekij�: Pekka Melgin
PVM: 8.10.2013
Kuvaus:
T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen primitiivisi� merkkitaulukoita!

Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
pitk�n merkkijonon (ei v�lily�ntej�).
a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
(tulostus tyyppi� "cout << mjono1[4];" jne)
b) Ohjelma k��nt�� annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen n�yt�lle
(tulostus tyyppi� "cout << mjono2;")
c) merkkijono voi olla kuinka pitk�
tahansa (max 100 kirjainta).
Sy�tetyn merkkijonon pituutta ei saa
laskea mill��n kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen k�ytt�j�lle.
V�lily�nnit jonossa ovat sallittuja.

K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
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
	cout << "Anna 17 merkki� pitk� merkkijono (ei v�lily�ntej�): ";
	cin.get(mjono,101);
	while (ind >= 0) {
		//cout << mjono[ind];
		mjono2[ind2] = mjono[ind];
		ind--;
		ind2++;
	}
	cout << mjono2;
}