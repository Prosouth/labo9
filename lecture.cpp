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
   vector<string> tableauLecture;
   

   while (getline(s, line)) 
   {
      tableauLecture.push_back(line);
   }
   s.close();
   
   return tableauLecture;
}

vector<string> inverser(vector<string>& dictionnaireNonTrie)
{
   vector<string> vecteurDeTri;
   for(size_t i = dictionnaireNonTrie.size() - 1; 0 <= i; --i)
   {
       vecteurDeTri.push_back(dictionnaireNonTrie[i]);
   }
   dictionnaireNonTrie = vecteurDeTri;
   
}