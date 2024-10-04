#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>

using namespace std;

class Client {
private:
    string CIN;
    string nom;
    string prenom;
    string telephone;

public:
    // Constructeur
    Client(string cin, string n, string p, string tel);

    // Accesseurs
    string getCIN() const;
    string getNom() const;
    string getPrenom() const;
    string getTelephone() const;

    // Méthode pour afficher les informations du client
    void afficherInfos() const;
};

#endif