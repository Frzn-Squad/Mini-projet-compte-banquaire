#include <iostream>
#include <cstring>
using namespace std;
class client
{
private:
char* cdt;
char* csl;
char* dbt;
int cin;
int prenom;
int nom;
int telephone;

public:
    client (int, int, int, int);
    float solde(char); 


};

client::client (int c, int p, int n, int t)
{
cin = c ;
prenom = p ;
nom = n ;
telephone = t ;

}
float client::solde(char choix)
{
    if(choix =='t')
   {  return 0;
   }
   else if(choix =='c')
   {  return 0;
   }
   else if(choix =='d')
   {  return 0;
   }
   else if(choix =='v')
   {  return 0;
   }
   else if(choix =='C')
   {  return 0;
   }
}
int main ()
{
    cout<< ("01122004", "Thomas", "Corbin", "0614126592");



}