//Auteur: Julien Poirier Morin
//Date de création:
//Date de modification: 
/*Description:

*/

#include <iostream>
#include "Date.h"
#include "DateH.h"
#include "Heure.h"
using namespace std;

int main() {
    // Code principal du programme
    cout << endl << "Teste des Heures" << endl;
    //Teste des Heures
    Heure h1(15, 34, 21), h2(10, 44, 59), hErr(25, 63, 70);
    h1.affiche();
    cout << endl;
    h2.affiche();
    cout << endl;
    hErr.affiche();
    cout << endl;

    if (h1 > h2) {
        cout << "L'heure :";
        h1.affiche();
        cout << " est superieure a l'heure : ";
        h2.affiche();
        cout << endl;
    }
    else {
        cout << "L'heure :";
        h1.affiche();
        cout << " n'est pas superieure a l'heure : ";
        h2.affiche();
        cout << endl;
    }
    cout << endl << "Teste des Dates" << endl;
    //Teste des Dates
    Date d1(29, 2, 2024), d2(30, 3, 2021), dErr(40, 13, 10000);
    d1.afficher();
    cout << endl;
    d2.afficher();
    cout << endl;
    dErr.afficher();
    cout << endl;

    cout << endl << "Teste des DateH" << endl;
    //Teste des DateH
    DateH dh1(9, 1, 2024, 7, 18, 32), dh2(23, 2, 2024, 20, 42, 55);
    dh1.affiche();
    cout << endl;
    dh2.affiche();
    cout << endl;

    if (dh1 > dh2) {
        cout << endl << "Vrai: ";
        dh1.affiche();
        cout << " est superieure a ";
        dh2.affiche();
        cout << endl;
    }
    else {
        cout << endl << "Faux: ";
        dh1.affiche();
        cout << " n'est pas superieure a ";
        dh2.affiche();
        cout << endl;
    }
    if (dh2 > dh1) {
        cout << endl << "Vrai: ";
        dh2.affiche();
        cout << " est superieure a ";
        dh1.affiche();
        cout << endl;
    }
    else {
        cout << endl << "Faux: ";
        dh2.affiche();
        cout << " n'est pas superieure a ";
        dh1.affiche();
        cout << endl;
    }

    cout << endl;
    cout << "Tests supp: " << endl;
    DateH j1(1, 1, 2020, 0, 0, 0), j2(31, 12, 2019, 23, 59, 59);
    bool test = j1 > j2;
    test ? cout << "vrai" : cout << "faux";


    return 0;
}