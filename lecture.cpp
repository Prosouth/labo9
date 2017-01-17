#include "lecture.h"
#include <fstream>
#include <iostream>
using namespace std;

vector<string> lecture(string nomDuFichier)
{
   ifstream s(nomDuFichier);
   string line;
   vector<string> tableauLecture;
   
   //Lecture du fichier ligne par ligne
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
   //Tri à bulles selon l'algorithme donné sur wikipédia
   for(size_t i = dictionnaireAtrier.size() - 1; i > 0 ; --i)
   {
      for(size_t j = 0; j < i; ++j)
      {
         if(dictionnaireAtrier[j + 1] < dictionnaireAtrier[j])
         {
            string tmp;
            tmp = dictionnaireAtrier[j + 1];
            dictionnaireAtrier[j + 1] = dictionnaireAtrier[j];
            dictionnaireAtrier[j] = tmp;
         }
      }
   }  
}
