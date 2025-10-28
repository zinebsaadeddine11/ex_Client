#include "C_Courant.h"

C_Courant::C_Courant(double balance, string dev, Date *d, double plafond):Compte(balance, dev, d)
{
	this->plafond = plafond;
}
void C_Courant::retirer(double montant)
{
    if (this->solde + this->plafond < montant)
        cout << "Solde insuffisant meme avec plafond!" << endl;
    else
       this-> solde -= montant;
}
void C_Courant::afficher() const
{
    Compte::afficher();
    cout << "Type: Compte Courant | Plafond autorise: " << this->plafond << " " << this->devise << endl;
}