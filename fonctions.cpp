#include <vector>
#include "fonctions.h"

double moyenne(double tab[], int sizeTab)
{
    double resultat = 0;
    for (int i=0; i<sizeTab; i++)
        resultat+= tab[i];
    resultat/=sizeTab;
    return resultat;
}

double moyenne2(std::vector<double> tab2, int sizeTab2)
{
    double resultat = 0;
    for (int i=0; i<sizeTab2; i++)
        resultat+= tab2[i];
    resultat/=sizeTab2;
    return resultat;
}
