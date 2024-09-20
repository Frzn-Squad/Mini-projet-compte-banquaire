#include "compte.h"  
#include <iostream>  
#include <iomanip>   

using namespace std;  

int Compte::compteurNumero = 0;  


Compte::Compte(Client& proprietaire)
    : numero("C" + to_string(++compteurNumero)), solde(0.0), proprietaire(proprietaire) {}


double Compte::getSolde() const {
    return solde;  
}

string Compte::getNumero() const {
    return numero;  
}

string Compte::getRIB() const {
    return "RIB-" + numero;  
}


void Compte::deposer(double montant) {
    if (montant > 0) {
        solde += montant;  
    }
}


void Compte::retirer(double montant) {
    if (montant > 0 && montant <= solde) {
        solde -= montant;  
    }
}


void Compte::transferer(Compte& autreCompte, double montant) {
    if (montant > 0 && montant <= solde) {
        retirer(montant);        
        autreCompte.deposer(montant);  
    }
}


void Compte::afficherInfo() const {
    cout << "Informations du compte:" << endl;
    cout << "Numéro: " << numero << endl;
    cout << "Solde: " << fixed << setprecision(2) << solde << " EUR" << endl;
    cout << "Propriétaire: " << proprietaire.getNom() << " " << proprietaire.getPrenom() << endl;
}


void Compte::commanderChequier() {
    cout << "Commande de chéquier pour le compte " << numero << " effectuée." << endl;
}
