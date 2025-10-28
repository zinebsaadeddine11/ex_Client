#include "Client.h"
#include "Date.h"
#include"Compte.h"
#include <cstdlib>
int Client::nbreinstance = 0;// initialisation d'un attribut de classe (static)
int Client::idcount = 0;
Client::Client(string name, string Lname, string cId,Date dateN,Compte *cpt):nom(name),prenom(Lname),CIN(cId),DateNaissance(dateN),compte(cpt)
{
	nbreinstance++;
	idcount++;
	this->NumClient = idcount;
}

void Client::afficher() const
{
	cout << "****** info client *****" << endl;
	cout << "Id: " << this->NumClient <<" " << "| Client: " << this->prenom << " " << this->nom << " | CIN: " << this->CIN << " " << "Ne(e) le : ";
	DateNaissance.afficher();
	cout << endl;
	compte->afficher();
	cout << endl;
}
Client Client::creator(string n, string p, string c, Date d, Compte* cpt)
{
	if (nbreinstance < 3) {
		return Client(n, p, c, d, cpt);
	}
	else {
		cout << "impossible limit c'est 3 client" << endl;
		exit(1);
	}
}

Client::~Client()
{
		nbreinstance--;
		cout << "call for client destructor" << endl;
}
