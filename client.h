#ifndef CLIENT_H
#define CLIENT_H

#include <string>  

using namespace std;  


class Client {
public:
    
    Client(const string& cin,  const string& nom, const string& prenom, const string& telephone);
    
private:
    
    string cin;        
    string nom;        
    string prenom;     
    string telephone;  
};

#endif 