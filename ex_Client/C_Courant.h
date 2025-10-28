#pragma once
#include "Compte.h"
#include"Date.h"
class C_Courant : public Compte
{
private:
	double plafond;
public:
	C_Courant(double , string , Date* , double);
	void retirer(double montant);
	void afficher() const ;
};

