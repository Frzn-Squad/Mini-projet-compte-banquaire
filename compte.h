#ifndef COMPTE_H
#define COMPTE_H

#include <string>   
#include "client.h" 

using namespace std;  

class Compte {
public:
    Compte ();
    double getSolde;
    string getNumero;
    string getRIB;
    void deposer();
    void retirer ();
    void transferer ();
    void afficherInfo() ;
    void commanderChequier();

private:
    static int compteurNumero;  
    string numero;              
    double solde;              
    Client& proprietaire;      
};

#endif 