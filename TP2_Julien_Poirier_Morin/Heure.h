#pragma once
class Heure
{
protected:
	int hh, mm, ss;
public:
	Heure();
	Heure(int h, int m, int s);
	void affiche();

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

