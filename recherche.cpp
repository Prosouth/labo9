/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "recherche.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;




int rechercheLineaire(const vector<string>& dictionnaire, const string& motCherche)
{
   for(size_t i = 0; i < dictionnaire.size(); ++i) {
      if(motCherche == dictionnaire.at(i)) 
         return i;
   }
   
   return dictionnaire.size()-1;
}

int rechercheLineaire(const vector<string>::iterator begin, const vector<string>::iterator end, const string& motCherche)
{
   for(vector<string>::iterator i = begin; i != end; ++i) {
      if(*i == motCherche)
         return distance(begin, i);
   }
   
   return distance(begin, end); 
}

int rechercheDichotomique(const vector<string>& dictionnaire, const string& motCherche)
{
   
}

int rechercheDichotomique(const vector<string>::iterator begin, const vector<string>::iterator end, const string& motCherche)
{
   
}


bool rechercheDichotomiqueRecursive(const vector<string>::iterator begin, const vector<string>::iterator end)
{
    
}

bool rechercheDichotomiqueRecursive(const vector<string>& dictionnaire, size_t first, size_t last)
{
   
}