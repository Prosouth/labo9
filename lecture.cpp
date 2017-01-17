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

void afficher(vector<string>& vecteurAfficher, const string& nomVecteur)
{
   cout << "Affichage du vecteur: " << nomVecteur << endl;
   for(size_t i = 0; i < vecteurAfficher.size(); i++)
   {
      cout << vecteurAfficher[i] << endl;
   }
}

void inverser(vector<string>& dictionnaireNonInverse)
{
   string temporaire;
   for(size_t i = 0, j = dictionnaireNonInverse.size() - 1; i <= dictionnaireNonInverse.size()/ 2; i++, j--)
   {
      temporaire = dictionnaireNonInverse.at(i);
      dictionnaireNonInverse.at(i) = dictionnaireNonInverse.at(j);
      dictionnaireNonInverse.at(j) = temporaire;
   }
}

void trier(vector<string>& dictionnaireAtrier)
{  
   for(size_t i = dictionnaireAtrier.size() - 1; i <= 1 ; --i)
   {
      for(size_t j = 0; j < i - 1; ++j)
      {
         if(dictionnaireAtrier[j+1] < dictionnaireAtrier[j])
         {
            string tmp;
            tmp = dictionnaireAtrier[j+1];
            dictionnaireAtrier[j+1] = dictionnaireAtrier[j];
            dictionnaireAtrier[j] = tmp;
         }
      }
   }  
}
