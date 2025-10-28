#pragma once
#include "Compte.h"
#include"Date.h"
class CEpargne :public Compte
{
private:
	double tauxInteret;
public:
	CEpargne(double balance, string dev, Date* d, double taux);
	void afficher() const ;
	void ajouterInteret();
};

