#include <iostream>    
   

using namespace std;   

int main() {
    int a;
    int b;
    cout<<"Entrer votre code ";
  cin>> a;
  if (a>1233 && a<1235)
  {
    cout<< "bienvenue"<<endl;  
  }
    else
    {
  cout<< "Carte rejeter"<<endl;

    }
  cout<< "Choisisser votre action"<<endl;
  cout<< "1. Consulter le RIB"<<endl;
  cout<< "2. Crediter le compte, en déposant une somme"<<endl;
  cout<< "3. Crediter le compte, prenant une somme d’un autre compte"<<endl;
  cout<< "4. Virement"<<endl;
  cout<< "5. Commander un chequier"<<endl;
  cout<< "6. Informations du comptes"<<endl;
  cin >> b;
  if (b == 1)
{
  cout<< "1. Consulter le RIB"<<endl;
}
else if (b == 2)
{
  cout<< "2. Crediter le compte, en déposant une somme"<<endl;
}
else if (b == 3)
{
  cout<< "3. Crediter le compte, prenant une somme d’un autre compte"<<endl;
}
else if (b == 4)
{
  cout<< "4. Virement"<<endl;
}
else if (b == 6)
{
  cout<< "5. Commander un chequier"<<endl;
}
else if (b == 6)
{
  cout<< "6. Informations du comptes"<<endl;
}
    return 0;  
};
 