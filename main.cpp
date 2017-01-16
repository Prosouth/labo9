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

   vector<string> nato = lecture("nato.txt");
   

   size_t first = 0;
   size_t last = nato.size();
   
   bool present = rechercheDichotomiqueRecursive(nato, first, last, "Zulu");
   
   if(present) {
      cout << "Le mot est présent dans le dico." << endl;
   } else {
      cout << "Le mot n'est pas présent dans le dico." << endl;
   }
   
   inverser(nato);
   
   return EXIT_SUCCESS;
}