#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Date.h"
class Compte
{
private:
	int static  count;
	int Numcompte;
protected : double solde;
	string devise;
	Date *createdon;
public:
	Compte(double, string , Date* );
	void afficher() const;
	void retirer(double montant);
	void deposer(double montant);
	~Compte();

};

