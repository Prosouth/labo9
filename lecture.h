#ifndef LECTURE_H
#define LECTURE_H
#include <vector>
#include <string>

using namespace std;

/**
Fonction qui prend un fichier .txt en paramètre et l'insère dans un vector
 @param string le nom du fichier complet
 @return vecteur rempli par le fichier
 */
vector<string> lecture(string nomDuFichier);

/**
Fonction qui inverse l'ordre des éléments d'un vecteur
 @param Vecteur contenant le dictionnaire non inversé
 @return void
 */
void inverser(vector<string>& dictionnaireNonInverse);

/**
Fonction qui prend un vecteur non ordré en paramètre et l'ordonne avec le tri à bulles
 @param Vecteur contenant un dictionnaire non trié
 @return void
 */
void trier(vector<string>& dictionnaireAtrier);

/**
Fonction qui affiche les valeurs d'un vecteur avec une string juste au-dessus.
 @param Vecteur à afficher contenant des strings.
 @param string qui contient la ligne à afficher avant l'affichage du vecteur
 @return void
 */
void afficher(vector<string>& vecteurAfficher, const string& nomVecteur);

#endif /* LECTURE_H */
