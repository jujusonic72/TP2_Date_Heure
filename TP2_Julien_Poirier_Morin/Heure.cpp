#include "Heure.h"
#include <iostream>
#include <iomanip>
using namespace std;

Heure::Heure() {
	hh = 0;
	mm = 0;
	ss = 0;
}
Heure::Heure(int h, int m, int s) {
	//si les valeurs sont correctes on les affecte sinon on affecte 0
	if (0 <= h <= 23) {
		hh = h;
	}
	else {
		hh = 0;
	}
	if (0 <= m <= 60) {
		mm = m;
	}
	else {
		mm = 0;
	}
	if (0 <= s <= 60) {
		ss = s;
	}
	else {
		ss = 0;
	}
}
//pour afficher l'heure en format hh:mm:ss
void Heure::affiche() {
	cout << setw(2) << setfill('0') << hh << ":";
	cout << setw(2) << setfill('0') << mm << ":";
	cout << setw(2) << setfill('0') << ss;
}
