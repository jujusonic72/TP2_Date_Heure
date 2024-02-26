#pragma once
#include "Heure.h"
#include "Date.h"
class DateH : Heure, Date
{
public:
	
	DateH(int jour, int mois, int annee, int heur, int min, int sec);
	void affiche();
	//operateur de comparaison > pour comparer deux dates et leurs heures
	bool operator > (DateH dh) {

		Date* Dptr = this;
		Heure* Hptr = this;

		Date* Dhptr = &dh;
		Heure* Hhptr = &dh;
		if (&Dptr > &Dhptr) {
			return true;
		}
		else if (&Dptr == &Dhptr && &Hptr > &Hhptr) {
			return true;
		}
		else {
			return false;
		}
		
	}

};
