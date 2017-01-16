/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "recherche.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;




int rechercheLineaire(const vector<string>& dictionnaire, const string& motCherche)
{
   for(int i = 0; i < dictionnaire.size(); ++i) 
   {
      if(motCherche == dictionnaire.at(i)) 
      {
         return i;
      } 
      else 
      {
         return dictionnaire.size()-1;
      }
   }
}

int rechercheLineaire(const vector<string>::iterator begin, const vector<string>::iterator end, 
                      const string& motCherche)
{
   for(vector<string>::iterator i = begin; i != end; ++i) 
   {
      if(*i == motCherche)
      {
         return distance(begin, i);
      } 
      else 
      {
         return distance(begin, end);
      }
   }
}

int rechercheDichotomique(const vector<string>& dictionnaire, const string& motCherche)
{
   bool trouve = false;
   size_t debut = 0,
           fin,
           milieu;
   do 
   {
      milieu = floor((debut + fin) / 2);
      if(dictionnaire[milieu] == motCherche) 
      {
         trouve = true;
      } 
      else if(motCherche > dictionnaire[milieu]) 
      {
         debut = milieu + 1;
      } 
      else 
      {
         fin = milieu - 1;
      }
   } while (!trouve && debut <= fin);
   
   if(trouve)
   {
      cout << "La valeur " << motCherche << " est au rang " << milieu << endl;
   }
   else
   {
      cout << " La valeur n\' est pas dans le tableau" << endl;
   }
}

int rechercheDichotomique()
{
   
}