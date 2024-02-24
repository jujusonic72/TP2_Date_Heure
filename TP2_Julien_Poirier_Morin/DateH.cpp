#include "DateH.h"
#include <iostream>
#include <iomanip>
using namespace std;

DateH::DateH(int jr, int ms, int an, int hr, int mn, int sc):Date (jr, ms, an),Heure(hr, mn, sc){
	jour = jr;
	mois = ms;
	annee = an;
	hh = hr;
	mm = mn;
	ss = sc;
}

void DateH::affiche() {
	cout << "Date : ";
	Date::afficher();
	cout << " Heure :";
	Heure::affiche();
}