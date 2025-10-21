#include "Compte.h"

Compte::Compte(string nCompte, double balance, string dev):numCompte(nCompte)
{
	this->devise = dev;
	this->solde = balance;
}
void Compte::afficher() const
{
	cout << " Votre Numero de compte est : " << numCompte << " | Votre solde est :" << solde << devise << endl;

}

void Compte::retirer(double montant)
{
	if (solde < montant)
	{
		cout << "Solde insuffisant!" << endl;
	}
	else
	{
		solde -= montant;
	}
}

void Compte::deposer(double montant)
{
	solde += montant;
}
