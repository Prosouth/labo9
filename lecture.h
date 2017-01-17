#ifndef LECTURE_H
#define LECTURE_H
#include <vector>
#include <string>

using namespace std;

/**
Fonction qui prend un fichier .txt en paramètre et l'insère dans un vector
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui est vrai si le déplacement est valide
 */
vector<string> lecture(string nomDuFichier);

/**
Fonction qui inverser l'ordre d'un vecteur
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui est vrai si le déplacement est valide
 */
void inverser(vector<string>& dictionnaireNonInverse);

/**
Fonction qui prend un vecteur non ordré en paramètre et l'ordonne
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui est vrai si le déplacement est valide
 */
void trier(vector<string>& dictionnaireAtrier);

/**
Fonction qui affiche les valeurs d'un vecteur avec une string juste au-dessus.
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui est vrai si le déplacement est valide
 */
void afficher(vector<string>& vecteurAfficher, const string& nomVecteur);

#endif /* LECTURE_H */
