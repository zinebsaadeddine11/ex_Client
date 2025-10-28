#pragma once
#include<string>
#include<iostream>
using namespace std;
#include"Date.h"
#include"Compte.h"

class Client
{
private:
	static int nbreinstance;
	static int idcount;
	int NumClient; // cle primaire 
	 string nom;
	 string prenom;
	 string CIN;
	Date DateNaissance;//passage par valeur
	Compte* compte;//passage par adresse
	Client(string, string, string, Date, Compte*);
public:

	void afficher() const;
	static Client creator(string, string, string, Date, Compte*);
	~Client();

};

