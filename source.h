#include <iostream>

using namespace std;
class compte {
private:
char* id;
char* nom;
char* prenom;
double numero;
double solde;
public:
compte(char *,char *,char *, double, double);
float credit();
float debit();
float consult();
float virement();
void affiche();
};