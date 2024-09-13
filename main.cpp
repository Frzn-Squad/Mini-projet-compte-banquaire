#include <iostream>
#include <cstring>
using namespace std;
class Voiture {
private:
   char *marque;
   char *modele;
   char *carburant;
   char *boite_vitesse;
   bool moteur;
   int kilometrage;
   int niv_carburant;
   static constexpr float consom_ref = 4.8f;


public:  
   Voiture(const char* marque, const char* modele, const char* carburant, const char* boite_vitesse, int kilometrage, int niv_carburant)
       : kilometrage(kilometrage), niv_carburant(niv_carburant), moteur(false) {
       marque = char[(marque) + 1];
       modele = char[(modele) + 1];
       carburant = char[(carburant) + 1];
       boite_vitesse = char[(boite_vitesse) + 1];
       (marque, marque);
       (modele, modele);
       (carburant, carburant);
       (boite_vitesse, boite_vitesse);
   }
   ~Voiture() {
       marque;
       modele;
       carburant;
       boite_vitesse;
   }
   void Afficher_voiture() const {
       cout << "———– Voiture ————–\n";
       cout << "Marque: " << marque << '\n';
       cout << "Modele: " << modele << '\n';
       cout << "Type de carburant: " << carburant << '\n';
       cout << "Boite de vitesse: " << boite_vitesse << '\n';
       cout << "Kilometrage: " << kilometrage << '\n';  
       cout << "Etat du moteur: " << (moteur ? "Allumé" : "Eteint") << '\n';
       cout << "Niveau de carburant: " << niv_carburant << " L\n";
       cout << "Distance estimée: " << Estim_distance() << " Km\n";
       cout << "———————————-\n";
   }
   int Rouler(int distance) {
 
           return kilometrage;
       }
   }
   float Consom_carburant(float distance) const {
       return consom_ref * distance / 100;
   }




};
int main() {
   Voiture ma_voiture("Audi", "A3", "Diesel", "Auto", 100000, 30);
   ma_voiture.Afficher_voiture();


   ma_voiture.allumer_moteur();
   ma_voiture.Afficher_voiture();


   ma_voiture.Rouler(300);
   ma_voiture.Afficher_voiture();


   return 0;
}
