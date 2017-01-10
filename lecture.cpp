/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "lecture.h"
#include <fstream>
#include <iostream>

using namespace std;

vector<string> lecture(string nomDuFichier)
{
   ifstream s(nomDuFichier);
   string line;

   while (getline(s, line)) {
     cout << line << endl;
   }
   s.close();
}