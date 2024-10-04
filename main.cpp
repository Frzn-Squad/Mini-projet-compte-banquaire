#include <iostream>  // Inclut la bibliothèque standard pour l'affichage et l'entrée (cout, cin)
#include "client.h"  // Inclut la définition de la classe Client
#include "compte.h"  // Inclut la définition de la classe Compte

using namespace std;  // Permet d'éviter de devoir écrire "std::" devant cout et cin

// Fonction pour afficher un menu avec les différentes opérations que l'utilisateur peut choisir
void afficherMenu() {
    cout << "\n=== Menu ===\n";  // Titre du menu
    cout << "1. Afficher les informations du compte\n";  // Option 1 : Voir les infos du compte
    cout << "2. Déposer de l'argent\n";  // Option 2 : Déposer de l'argent sur le compte
    cout << "3. Effectuer un virement vers l'autre compte\n";  // Option 3 : Transférer de l'argent vers un autre compte
    cout << "4. Quitter\n";  // Option 4 : Quitter le programme
    cout << "Votre choix : ";  // Invite l'utilisateur à entrer son choix
}

// Fonction qui gère les opérations sur un compte donné (dépôt, retrait, etc.)
void gererCompte(Compte& compteActuel, Compte& autreCompte) {
    int choix;  // Variable pour stocker le choix de l'utilisateur
    do {
        afficherMenu();  // Affiche le menu à chaque itération
        cin >> choix;  // L'utilisateur entre son choix

        // On utilise un "switch" pour exécuter différentes actions selon le choix de l'utilisateur
        switch (choix) {
            case 1:  // Option 1 : Afficher les informations du compte
                compteActuel.afficherCompte();  // Affiche les détails du compte actuel
                break;

            case 2: {  // Option 2 : Déposer de l'argent sur le compte
                double montant;
                cout << "Entrez le montant à déposer : ";  // Demande à l'utilisateur le montant à déposer
                cin >> montant;  // Stocke la valeur entrée dans la variable "montant"
                compteActuel.deposer(montant);  // Appelle la méthode pour déposer ce montant sur le compte
                break;
            }

            case 3: {  // Option 3 : Effectuer un virement vers l'autre compte
                double montant;
                cout << "Entrez le montant à virer vers l'autre compte : ";  // Demande le montant du virement
                cin >> montant;

                // Vérifie si le compte a assez de solde pour faire le virement
                if (compteActuel.getSolde() >= montant) {
                    compteActuel.retirer(montant);  // Retire l'argent du compte actuel
                    autreCompte.deposer(montant);  // Dépose l'argent sur l'autre compte
                    cout << "Virement de " << montant << " € effectué avec succès.\n";
                } else {
                    cout << "Solde insuffisant pour le virement.\n";  // Message si le solde est trop faible
                }
                break;
            }

            case 4:  // Option 4 : Quitter le menu
                cout << "Retour au menu principal...\n";
                break;

            default:
                cout << "Choix invalide, veuillez réessayer.\n";  // Si l'utilisateur fait un choix incorrect
                break;
        }
    } while (choix != 4);  // La boucle continue tant que l'utilisateur ne choisit pas de quitter
}

int main() 
{
    // Création de deux clients avec leurs informations respectives
    Client client1("12345678", "Dupont", "Jean", "0606060606");  // Client Jean Dupont
    Compte compte1(client1, 1000);  // Compte de Jean avec 1000€ de solde initial

    Client client2("86488646", "Dutemps", "Arthur", "0707070707");  // Client Arthur Dutemps
    Compte compte2(client2, 2000);  // Compte d'Arthur avec 2000€ de solde initial

    int choixCompte;  // Variable pour stocker le choix du compte (Jean ou Arthur)
    do {
        // Affiche un menu pour sélectionner le compte à gérer
        cout << "\n=== Sélection du compte ===\n";
        cout << "1. Compte de Jean Dupont\n";
        cout << "2. Compte de Arthur Dutemps\n";
        cout << "3. Quitter\n";
        cout << "Votre choix : ";  // Demande à l'utilisateur de choisir un compte
        cin >> choixCompte;

        // Exécute une action selon le compte choisi
        switch (choixCompte) {
            case 1:
                gererCompte(compte1, compte2);  // Gère le compte de Jean Dupont
                break;
            case 2:
                gererCompte(compte2, compte1);  // Gère le compte d'Arthur Dutemps
                break;
            case 3:
                cout << "Merci d'avoir utilisé notre service.\n";  // Message de fin
                break;
            default:
                cout << "Choix invalide, veuillez réessayer.\n";  // Si l'utilisateur entre un choix incorrect
                break;
        }
    } while (choixCompte != 3);  // La boucle continue tant que l'utilisateur ne choisit pas de quitter

    return 0;  // Fin du programme
}