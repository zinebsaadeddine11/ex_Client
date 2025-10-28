#include "CEpargne.h"

CEpargne::CEpargne(double balance, string dev, Date *d, double taux):Compte(balance,dev,d)
{
	this->tauxInteret = taux;
}
void CEpargne::afficher() const
{
	Compte::afficher();
	cout << "Type: Compte Epargne | Taux d'interet: " << this->tauxInteret << "%" << endl;
}

void CEpargne::ajouterInteret()
{
	this->solde += this->solde * (this->tauxInteret / 100);
}
