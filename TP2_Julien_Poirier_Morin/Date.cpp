#include "Date.h"
#include <iostream>
#include <iomanip>
using namespace std;
Date::Date() {
	annee = 0;
	mois = 0;
	jour = 0;
}
Date::Date(int j, int m, int a) {
	annee = 0;
	mois = 0;
	jour = 0;
	if (0 <= a < 10000) {
		annee = a;
	}
	else {
		cout << "Annee non valide" << endl;
	}
	if (1 <= m <= 12) {
		mois = m;
	}
	else {
		cout << "mois invalide" << endl;
	}
	if (mois == 2 && annee % 4 == 0 && 1 <= j <= 29) {
		jour = j;
	}
	else if (mois == 2 && annee % 4 != 0 && 1 <= j <= 28) {
		jour = j;
	}
	else if ((mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12) && 1 <= j <= 31) {
		jour = j;
	}
	else if ((mois == 4 || mois == 6 || mois == 9 || mois == 11) && 1 <= j <= 30) {
		jour = j;
	}
	else {
		cout << "Jour invalide" << endl;
	}
}

void Date::afficher() {
	cout << setw(4) << setfill('0') << annee << ":";
	cout << setw(2) << setfill('0') << mois << ":";
	cout << setw(2) << setfill('0') << jour;
}