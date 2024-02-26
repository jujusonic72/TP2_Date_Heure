#include "DateH.h"
#include <iostream>
#include <iomanip>
using namespace std;
//constructeur parametre de la classe DateH qui appelle les constructeurs parametres des classes Date et Heure
DateH::DateH(int jr, int ms, int an, int hr, int mn, int sc):Date (jr, ms, an),Heure(hr, mn, sc){
	jour = jr;
	mois = ms;
	annee = an;
	hh = hr;
	mm = mn;
	ss = sc;
}
//methode pour afficher la date et l'heure
void DateH::affiche() {
	cout << "Date : ";
	Date::afficher();
	cout << " Heure :";
	Heure::affiche();
}