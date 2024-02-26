#pragma once
class Heure
{
protected:
	int hh, mm, ss;
public:
	//constructeur par defaut
	Heure();
	//constructeur parametre
	Heure(int h, int m, int s);
	void affiche();
	//operateur de comparaison > pour comparer deux heures
	bool operator > (Heure t) {
		if (this->hh > t.hh) {
			return true;
		}
		else if (this->hh < t.hh) {
			return false;
		}
		else {
			if (this->mm > t.mm) {
				return true;
			}
			else if (this->mm < t.mm) {
				return false;
			}
			else {
				if (this->ss > t.ss) {
					return true;
				}
				else if (this->ss < t.ss) {
					return false;
				}
				else {
					return false;
				}
			}
		}
	}
};

