#include "Client.h"
#include "Date.h"
#include"Compte.h"

Client::Client(string name, string Lname, string cId,Date dateN,Compte *cpt):nom(name),prenom(Lname),CIN(cId),DateNaissance(dateN),compte(cpt)
{
}

void Client::afficher() const
{
	cout << "Client: " << prenom << " " << nom << " | CIN: " << CIN << " " << "Ne(e) le : ";
	DateNaissance.afficher();
	cout << endl;
	compte->afficher();
	cout << endl;
}
