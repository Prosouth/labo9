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

vector<string> inverser(vector<string>& dictionnaireNonTrie)
{
   /*vector<string> vecteurDeTri;
   for(size_t i = 0; i < dictionnaireNonTrie.size(); ++i)
   {
       //vecteurDeTri.push_back(dictionnaireNonTrie[i]);
   }
   dictionnaireNonTrie = vecteurDeTri;
   */

   int milieu = dictionnaireNonTrie.size() / 2;
   int dernier = dictionnaireNonTrie.size() - 1;

   for (int i = 0; i < milieu; i++) 
   {
     string temporaire = dictionnaireNonTrie[i];
     dictionnaireNonTrie.at(i) = dernier - i;
     dictionnaireNonTrie[dernier - i] = temporaire;
   }

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
