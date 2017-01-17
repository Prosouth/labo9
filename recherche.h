#ifndef RECHERCHE_H
#define RECHERCHE_H
#include <vector>
#include <string>

using namespace std;



/**
Fonction qui effectue une recherche linéaire sur un vecteur
 @param vecteur de string en référence contenant le dictionnaire
 @param string qui contient la recherche
 @return int 
 */
size_t rechercheLineaire(const vector<string>& dictionnaire, const string& motCherche);


/**
Fonction qui effectue une recherche linéaire sur un vecteur en utilisant des itérateurs
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui est vrai si le déplacement est valide
 */
int rechercheLineaire(const vector<string>::iterator begin, const vector<string>::iterator end, 
                      const string& motCherche);


/**
Fonction qui effectue une recherche dichotomique sur un vecteur
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui est vrai si le déplacement est valide
 */
int rechercheDichotomique(const vector<string>& dictionnaire, const string& motCherche);


/**
Fonction qui effectue une recherche dichotomique sur un vecteur avec l'aide d'itérateurs
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui est vrai si le déplacement est valide
 */
int rechercheDichotomique(const vector<string>::iterator begin, const vector<string>::iterator end, 
                          const string& motCherche);


/**
Fonction récursive qui effectue une recherche dichotomique sur un vecteur avec l'aide d'itérateurs 
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui est vrai si le la string cherchée est trouvée
 */
bool rechercheDichotomiqueRecursive(const vector<string>::iterator begin, const vector<string>::iterator end, const string& motCherche);


/**
Fonction récursive qui effectue une recherche dichotomique sur un vecteur avec l'aide d'indices sur les vecteurs 
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui est vrai si le la string cherchée est trouvée
 */
bool rechercheDichotomiqueRecursive(const vector<string>& dictionnaire, size_t first, size_t last, const string& motCherche);

#endif /* RECHERCHE_H */

