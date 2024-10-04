#include "compte.h"

// Initialisation du compteur à 0
int Compte::compteur = 0;

// Constructeur de la classe Compte
Compte::Compte(Client c, double soldeInitial) : proprietaire(c), solde(soldeInitial) {
    numeroCompte = ++compteur;  // Numéro de compte unique
}

// Méthode pour obtenir le numéro du compte
int Compte::getNumeroCompte() const {
    return numeroCompte;
}

// Méthode pour obtenir le solde
double Compte::getSolde() const {
    return solde;
}

// Méthode pour déposer de l'argent
void Compte::deposer(double montant) {
    solde += montant;
    cout << "Dépôt de " << montant << " effectué. Nouveau solde: " << solde << "\n";
}

// Méthode pour retirer de l'argent
void Compte::retirer(double montant) {
    if (montant <= solde) {
        solde -= montant;
        cout << "Retrait de " << montant << " effectué. Nouveau solde: " << solde << "\n";
    } else {
        cout << "Solde insuffisant!" << "\n";
    }
}

// Méthode pour afficher les informations du compte
void Compte::afficherCompte() const {
    cout << "Numéro de compte: " << numeroCompte << "\nSolde: " << solde << "\n";
    proprietaire.afficherInfos();
}