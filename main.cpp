/* ---------------------------
 Laboratoire: 9 - Dictionnaire
 Fichier    : main.cpp
 Auteur(s)  : Nair Alic et Sébastien Saez
 Date       : 17 Janvier 2017
 
 But        : Le but de ce laboratoire est d'établir les bases d'un correcteur orthographique       
 
 Remarque(s) : Tout à l'air de fonctionner correctement.
 
 Compilateur : g++ 6.2.1 20160830
 --------------------------- */
#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
#include "recherche.h"
#include "lecture.h"
using namespace std;


int main() {

   vector<string> nato_ordre = lecture("nato.txt");
   vector<string> nato_suffled  = lecture("nato_shuffled.txt");
   int indice;


   cout << " Test de tri du vecteur" << endl;
   cout << "============================" << endl;
   afficher(nato_suffled, "nato_shuffled.txt");
   trier(nato_suffled);
   afficher(nato_suffled, "nato_suffled.txt remis en ordre");
   cout << endl << endl;
   
   cout << " Test d'inversion du vecteur" << endl;
   cout << "============================" << endl;
   afficher(nato_ordre, "Nato");
   inverser(nato_ordre);
   afficher(nato_ordre, "Nato inverse");
   inverser(nato_ordre); // Pour pouvoir le réutiliser par la suite
   cout << endl << endl;
   
   
   cout << "Test de recherche dichotomique" << endl;
   cout << "==============================" << endl;
   cout << "On recherche Echo" << endl;
  
   
   rechercheDichotomique(nato_ordre, "Echo");
   cout << endl << endl;
   
   
   cout << "Test de recherche dichotomique récursive" << endl;
   cout << "========================================" << endl;
   cout << "On recherche Papa" << endl;
   
   
   cout << boolalpha << 
           rechercheDichotomiqueRecursive(nato_ordre,0,nato_ordre.size() -1, "Papa") << endl;
   cout << "Papa est donc dans la liste" << endl << endl;
   
   cout << "On recherche Caca" << endl;
   
   
   cout << boolalpha << 
           rechercheDichotomiqueRecursive(nato_ordre,0,nato_ordre.size() -1, "Caca") << endl;
   cout << "Caca n\'est donc pas dans la liste" << endl;
   
   
   cout << "Recherche Lineaire" << endl;
   cout << "==================" << endl;
   cout << "-Papa ou t\'es?" << endl;
   cout << "-En position: " << rechercheLineaire(nato_ordre, "Papa");
   
   
   
   return EXIT_SUCCESS;
}