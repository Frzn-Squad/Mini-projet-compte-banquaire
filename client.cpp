#include "client.h"

// Constructeur de la classe Client
Client::Client(string cin, string n, string p, string tel)
    : CIN(cin), nom(n), prenom(p), telephone(tel) {}

// Méthode pour obtenir le CIN du client
string Client::getCIN() const {
    return CIN;
}

// Méthode pour obtenir le nom du client
string Client::getNom() const {
    return nom;
}

// Méthode pour obtenir le prénom du client
string Client::getPrenom() const {
    return prenom;
}

// Méthode pour obtenir le téléphone du client
string Client::getTelephone() const {
    return telephone;
}

// Méthode pour afficher les informations du client
void Client::afficherInfos() const {
    cout << "CIN: " << CIN << "\nNom: " << nom << "\nPrenom: " << prenom 
         << "\nTelephone: " << telephone << "\n";
}