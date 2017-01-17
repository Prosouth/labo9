/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nair
 *
 * Created on 10. janvier 2017, 10:48
 */

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
   cout << endl << endl;
   
   
   return EXIT_SUCCESS;
}
