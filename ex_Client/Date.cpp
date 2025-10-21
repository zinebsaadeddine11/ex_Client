#include "Date.h"
Date::Date(int j, int m, int a)
{
	this->jour = j;
	this->mois = m;
	this->annee = a;
}
void Date::afficher() const
{
	cout << jour << "/" << mois << "/" << annee;
}
