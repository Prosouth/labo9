/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   recherche.h
 * Author: prosouth
 *
 * Created on 10 January 2017, 11:39
 */

#ifndef RECHERCHE_H
#define RECHERCHE_H
#include <vector>
#include <string>

using namespace std;

int rechercheLineaire(const vector<string>& dictionnaire, string motCherche);
int rechercheLineaire(const vector<string>::iterator begin, const vector<string>::iterator end, 
                      const string& motCherche);

int rechercheDichotomique(const vector<string>& dictionnaire, const string& motCherche);

#endif /* RECHERCHE_H */

