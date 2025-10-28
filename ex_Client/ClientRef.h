#pragma once
#include<string>
#include<iostream>
using namespace std;
#include"Date.h"
#include"Compte.h"
class ClientRef
{
private:
	static int nbreinstance;
	static int idcount;
	int NumClient;
	string nom;
	string prenom;
	string CIN;
	Date DateNaissance;//passage par valeur
	Compte& compte;//passage par référence
public:
	ClientRef(string, string, string, Date, Compte&);
	void afficher() const;
	~ClientRef();

};
