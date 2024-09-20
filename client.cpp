#include <iostream>
#include "client.h"
using namespace std;

Client::Client(const string& cin, const string& nom, const string& prenom, const string& telephone)
    : cin(cin), nom(nom), prenom(prenom), telephone(telephone) {}
string Client::()  {
    return cin;  
}
string Client::()  {
    return nom;  
}
string Client::()  {
    return prenom;  
}
string Client::()  {
    return telephone;  
}
