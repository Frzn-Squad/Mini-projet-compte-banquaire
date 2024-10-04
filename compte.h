#ifndef COMPTE_H  // Si COMPTE_H n'est pas encore défini, on le définit
#define COMPTE_H  // Définit la constante pour éviter les inclusions multiples

#include <iostream>  // Pour cout, cin
#include <string>  // Pour les chaînes de caractères (std::string)
#include "client.h"  // On inclut la classe Client car un compte appartient à un client

using namespace std;

class Compte {
private:
    static int compteur;  // Compteur pour générer un numéro de compte unique
    int numeroCompte;  // Numéro de compte unique
    double solde;  // Solde du compte
    Client proprietaire;  // Propriétaire du compte (de type Client)

public:
    // Constructeur : initialise un compte avec un client et un solde initial
    Compte(Client c, double soldeInitial);

    // Accesseurs : méthodes pour accéder aux informations privées
    int getNumeroCompte() const;  // Retourne le numéro du compte
    double getSolde() const;  // Retourne le solde du compte

    // Méthodes pour les opérations bancaires
    void deposer(double montant);  // Pour ajouter de l'argent sur le compte
    void retirer(double montant);  // Pour retirer de l'argent du compte

    // Méthode pour afficher les informations du compte
    void afficherCompte() const;
};

#endif  // Fin de la condition #ifndef pour éviter les inclusions multiples
