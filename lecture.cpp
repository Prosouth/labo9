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

vector<string> trier(vector<string>& dictionnaireAtrier)
{  
   for(size_t i = dictionnaireAtrier.size() - 1; i <= 1 ; --i)
   {
      bool tableauTrier = true;
      for(size_t j = 0; j < i - 1; ++j)
      {
         if(dictionnaireAtrier[j+1] < dictionnaireAtrier[j])
         {
            string tmp;
            tmp = dictionnaireAtrier[j+1];
            dictionnaireAtrier[j+1] = dictionnaireAtrier[j];
            dictionnaireAtrier[j] = tmp;
                    
            tableauTrier = false;
         }
      }
      if(tableauTrier)
      {
         return dictionnaireAtrier;
      }
   }  
}