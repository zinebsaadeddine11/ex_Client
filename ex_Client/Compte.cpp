#include "Compte.h"
#include"Date.h"
int Compte::count = 0;
Compte::Compte(double balance, string dev, Date* d)
{ 
	count++;
	this->Numcompte = count;
	this->solde = balance;
	this->devise = dev;
	this->createdon = d;
}
void Compte::afficher() const
{
	cout << "** info compte**" << endl;
	cout << " Votre Numero de compte est : " << this->Numcompte << " | Votre solde est :" << this->solde << this->devise << endl;
	cout << " date creation : ";
	this->createdon->afficher();

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

Compte::~Compte()
{
	cout << "call for account destructor" << endl;
}
