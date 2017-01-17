#ifndef RECHERCHE_H
#define RECHERCHE_H
#include <vector>
#include <string>

using namespace std;



/**
Fonction qui effectue une recherche linéaire sur un vecteur
 @param vecteur de string en référence constante contenant le dictionnaire
 @param string qui contient la recherche
 @return size_t qui retourne une valeur très grande si la valeur n'a pas été
 *       trouvée. Si la valeur est trouvée, on retourne l'indice.
 */
size_t rechercheLineaire(const vector<string>& dictionnaire, const string& motCherche);


/**
Fonction qui effectue une recherche linéaire sur un vecteur en utilisant des itérateurs
 @param itérateur qui pointe vers le début du vecteur
 @param itérateur qui pointe vers la fin du vecteur
 @param String qui contient la recherche 
 @return size_t qui retourne dico.end si la valeur n'a pas été
 *       trouvée. Si la valeur est trouvée, on retourne l'indice.
 */
size_t rechercheLineaire(const vector<string>::iterator begin, const vector<string>::iterator end, 
                      const string& motCherche);


/**
Fonction qui effectue une recherche dichotomique sur un vecteur
 @param vecteur de string en référence constante contenant le dictionnaire
 @param string contenant le mot cherché
 @return int qui retourne l'indice du mot trouvé
 */
int rechercheDichotomique(const vector<string>& dictionnaire, const string& motCherche);


/**
Fonction qui effectue une recherche dichotomique sur un vecteur avec l'aide d'itérateurs
 @param itérateur qui pointe vers le début du vecteur
 @param itérateur qui pointe vers le fin du vecteur
 @param string contenant le mot cherché
 @return int qui retourne l'indice du mot trouvé
 */
vector<string>::iterator rechercheDichotomique(const vector<string>::iterator begin, const vector<string>::iterator end, 
                          const string& motCherche);


/**
Fonction récursive qui effectue une recherche dichotomique sur un vecteur avec l'aide d'itérateurs 
 @param itérateur qui pointe vers le début du vecteur
 @param itérateur qui pointe vers le fin du vecteur
 @param string contenant le mot cherché
 @return bool qui retrourne vrai si le la string cherchée est trouvée
 */
bool rechercheDichotomiqueRecursive(const vector<string>::iterator begin, 
                         const vector<string>::iterator end, const string& motCherche);


/**
Fonction récursive qui effectue une recherche dichotomique sur un vecteur avec l'aide d'indices sur les vecteurs 
 @param Tableau d'enum contenant l'état du jeu
 @param string saisieUtilisateur qui contient la saisie de l'utilisateur
 @return bool qui retourne vrai si le la string cherchée est trouvée
 */
bool rechercheDichotomiqueRecursive(const vector<string>& dictionnaire, size_t first, size_t last, const string& motCherche);

#endif /* RECHERCHE_H */

