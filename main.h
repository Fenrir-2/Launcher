#include <iostream>
#include <windows.h>
#include <stdlib.h>

#define MAJOR_VERSION 1
#define MINOR_VERSION 0            //Avant de changer de version, changer aussi le titre dans afficherInfos()!
#define COMP_DAY 1               //Jour de la compilation
#define COMP_MONTH 12            //Mois de la compilation
#define COMP_YEAR 2013          //Année de la compilation

using namespace std;
void afficherInfos(char* chemin);
