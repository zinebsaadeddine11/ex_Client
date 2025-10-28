#include "ClientRef.h"
#include "Date.h"
#include"Compte.h"
int ClientRef::nbreinstance = 0;// initialisation d'un attribut de classe (static)
int ClientRef::idcount = 0;
ClientRef::ClientRef(string name, string Lname, string cId, Date dateN, Compte& cpt) :nom(name), prenom(Lname), CIN(cId), DateNaissance(dateN), compte(cpt)
{
	nbreinstance++;
	idcount++;
}

void ClientRef::afficher() const
{
	cout << "Client: " << prenom << " " << nom << " | CIN: " << CIN << " " << "Ne(e) le : ";
	DateNaissance.afficher();
	cout << endl;
	compte.afficher();
	cout << endl;
}

ClientRef::~ClientRef()
{
	nbreinstance--;
}
