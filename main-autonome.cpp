#include <iostream>
#include <vector>

using namespace std;

double moyen(std::vector<double> tab2, int sizeTab2)
{
    double resultat = 0;
    for (int i=0; i<sizeTab2; i++)
        resultat+= tab2[i];
    resultat/=sizeTab2;
    return resultat;
}

int main()
{
    vector<double> notes;
    notes.push_back(12.5);
    notes.push_back(19.5);
    notes.push_back(6);
    notes.push_back(12);
    notes.push_back(14.5);
    notes.push_back(15);

    cout << "Moyenne generale (avec fonction) => " << moyen(notes,notes.size()) << " !!!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int const tailleX(5);
    int const tailleY(10);
    int tabXY[tailleX][tailleY];

       string nomUtilisateur("Julien");
       cout << "Vous etes " << nomUtilisateur << "." <<endl;
       nomUtilisateur[0] = 'L';  //On modifie la première lettre
       nomUtilisateur[2] = 'c';  //On modifie la troisième lettre
       cout << "Ah non, vous etes " << nomUtilisateur << "!" << endl;

string texte("Portez ce whisky au vieux juge blond qui fume plus ou moins.");  //?? caractères
cout << texte << " << CONTIENT >> " << texte.size() << " lettres." << endl;

    return 0;
}
