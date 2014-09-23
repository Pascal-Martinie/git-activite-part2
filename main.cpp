#include <iostream>
#include "fonctions.h"
#include <vector>

using namespace std;

int main()
{
    vector<double> notes;
    notes.push_back(12.5);
    notes.push_back(19.5);
    notes.push_back(6);
    notes.push_back(12);
    notes.push_back(14.5);
    notes.push_back(15);
    double moyenne = 0;
    for ( int i=0; i<notes.size(); i++)
    {
        cout << "Note n° " << i << " => " << notes[i] << endl;
        moyenne+=notes[i];
    }
    cout << endl;
    moyenne/=notes.size();
    cout << "Moyenne generale => " << moyenne << " !!!" << endl;
    cout << "Moyenne generale (avec fonction) => " << moyenne2(notes,notes.size()) << " !!!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int const tailleX(5);
    int const tailleY(10);
    int tabXY[tailleX][tailleY];
    // tableau à 2 dimensions déclaré avec des variables (constantes)

       string nomUtilisateur("Julien");
       cout << "Vous etes " << nomUtilisateur << "." <<endl;
       nomUtilisateur[0] = 'L';  //On modifie la première lettre
       nomUtilisateur[2] = 'c';  //On modifie la troisième lettre
       cout << "Ah non, vous etes " << nomUtilisateur << "!" << endl;

string texte("Portez ce whisky au vieux juge blond qui fume.");  //46 caractères
cout << texte << " << CONTIENT >> " << texte.size() << " lettres." << endl;

    return 0;
}
