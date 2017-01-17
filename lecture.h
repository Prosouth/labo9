/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lecture.h
 * Author: prosouth
 *
 * Created on 09 January 2017, 10:47
 */

#ifndef LECTURE_H
#define LECTURE_H
#include <vector>
#include <string>

using namespace std;

vector<string> lecture(string nomDuFichier);
vector<string> inverser(vector<string>& dictionnaireNonTrie);
vector<string> trier(vector<string>& dictionnaireAtrier);

#endif /* LECTURE_H */