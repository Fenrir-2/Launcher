#include "main.h"

int main(int argc, char** argv)
{
    system("cls");
    afficherInfos(argv[0]);
    int reponse = 0;
    cout << "Bonjour et bienvenue sur ce 1er lanceur de Plus ou Moins et de RPG." << endl;
    cout << "Faites votre choix:" << endl;
    cout << "1.Plus ou Moins" << endl;
    cout << "2.RPG" << endl;

    cin >> reponse;

    if(reponse == 1)
    {
        ShellExecute(NULL, "open", "Plus ou Moins 2.exe", "", "Data", SW_SHOWDEFAULT);
    }

    else if(reponse == 2)
    {
        ShellExecute(NULL, "open", "RPG.exe", "", "Data", SW_SHOWDEFAULT);
    }
    return 0;
}

void afficherInfos(char* chemin = "Chemin Inconnu")
{
    system("color 0A"); //Couleur verte sur fond noir
    system("Title Lanceur"); //Changement du titre
    system("cls");
    cout << "Projet developpe par: Nicolas Fonnier"<< endl;
    cout << "Projet n° 3: Launcher" << endl;
    cout << "Chemin: " << chemin << endl;
    cout << "Numero de version: " << MAJOR_VERSION << "." << MINOR_VERSION << endl;
    cout << "Date de compilation: " << COMP_DAY << "\\" << COMP_MONTH << "\\" << COMP_YEAR << endl;
    system("pause"); //Pour s'assurer que les infos ont bien été vues
    system("cls");  //On efface l'écran pour que ce soit plus lisible

}
//Affiche les informations du projet
