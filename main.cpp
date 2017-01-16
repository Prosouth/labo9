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
   
   //int position = rechercheDichotomique(nato.begin(), nato.end(), "Papa");
   
   inverser(nato);
   
   //cout << "Le mot se trouve à la position " << position << endl;
   
   return EXIT_SUCCESS;
}