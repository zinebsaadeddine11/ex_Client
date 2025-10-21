#include "ClientRef.h"
#include "Date.h"
#include"Compte.h"

ClientRef::ClientRef(string name, string Lname, string cId, Date dateN, Compte& cpt) :nom(name), prenom(Lname), CIN(cId), DateNaissance(dateN), compte(cpt)
{
}

void ClientRef::afficher() const
{
	cout << "Client: " << prenom << " " << nom << " | CIN: " << CIN << " " << "Ne(e) le : ";
	DateNaissance.afficher();
	cout << endl;
	compte.afficher();
	cout << endl;
}
