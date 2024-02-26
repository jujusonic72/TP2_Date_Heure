#pragma once
class Date
{
protected:
	int jour, mois, annee;
public:
	//constructeur par defaut
	Date();
	//constructeur parametre
	Date(int j, int m, int a);
	void afficher();
	//operateur de comparaison > pour comparer deux dates
	bool operator > (Date t) {
		if (this->annee > t.annee) {
			return true;
		}
		else if (this->annee < t.annee) {
			return false;
		}
		else {
			if (this->mois > t.mois) {
				return true;
			}
			else if (this->mois < t.mois) {
				return false;
			}
			else {
				if (this->jour > t.jour) {
					return true;
				}
				else if (this->jour < t.jour) {
					return false;
				}
				else {
					return false;
				}
			}
		}
	}
	bool operator == (Date t) {
		if (this->annee == t.annee && this->mois == t.mois && this->jour == t.jour) {
			return true;
		}
		else {
			return false;
		}
	}
};

