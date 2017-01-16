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
   for(size_t i = 0; i < dictionnaire.size(); ++i) 
   {
      if(motCherche == dictionnaire.at(i))
      {
         return i;
      }
   }
   
   return dictionnaire.size()-1;
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
   }
   
   return distance(begin, end); 
}

int rechercheDichotomique(const vector<string>& dictionnaire, const string& motCherche)
{
   bool trouve = false;
   size_t debut = 0,
           fin = dictionnaire.size() - 1,
           milieu;
   do 
   {
      milieu = floor((debut + fin) / 2);
      if(dictionnaire.at(milieu) == motCherche) 
      {
         trouve = true;
      } 
      else if(motCherche > dictionnaire.at(milieu)) 
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

int rechercheDichotomique(const vector<string>::iterator begin, const vector<string>::iterator end, const string& motCherche)
{
   bool trouve = false;
   size_t debut = distance(begin, begin);
   size_t fin = distance(end,end);
   auto milieu = floor(distance(begin, end) / 2);
}


bool rechercheDichotomiqueRecursive(const vector<string>::iterator begin, const vector<string>::iterator end, const string& motCherche)
{
   
}

bool rechercheDichotomiqueRecursive(const vector<string>& dictionnaire, size_t first, size_t last, const string& motCherche)
{
   int milieu = floor((first + last) / 2);
   bool trouver = false;
   
   if(dictionnaire.at(milieu) == motCherche)
   {
      trouver = true;
      return trouver; 
   } 
   else if (dictionnaire.at(milieu) > motCherche) 
   {
      return rechercheDichotomiqueRecursive(dictionnaire, first, milieu, motCherche);
   } 
   else
   {
      return rechercheDichotomiqueRecursive(dictionnaire, milieu, last, motCherche);
   }
   
}