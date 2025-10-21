#pragma once
#include<string>
#include<iostream>
using namespace std;
#include"Date.h"
#include"Compte.h"
class ClientRef
{
private:
	const string nom;
	const string prenom;
	const string CIN;
	Date DateNaissance;//passage par valeur
	Compte& compte;//passage par référence
public:
	ClientRef(string, string, string, Date, Compte&);
	void afficher() const;

};
