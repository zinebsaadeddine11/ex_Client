#pragma once
#include<iostream>
using namespace std;
#include<string>
class Compte
{
private:
	const string numCompte;
	double solde;
	string devise;
public:
	Compte(string, double, string);
	void afficher() const;
	void retirer(double montant);
	void deposer(double montant);

};

