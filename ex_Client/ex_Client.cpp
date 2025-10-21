// ex_Client.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Client.h"
#include"ClientRef.h"

int main()
{
    //creation du date
    Date d1(12,4,1998);
    Date d2(1, 4, 1985);
    //creation du compte
    Compte acc1("1452789", 10000, "MAD");
    Compte* acc2 = new Compte("1324509", 2000, "MAD");
    //creation du client
    Client c1("BERRADA", "SAMIR", "B234560",d1,&acc1);
    Client* c2 = new Client("RAHIM", "SALMA", "D213409", d2,acc2);
    //affichage du client 
    cout << "****PASSAGE PAR ADRESSE****" << endl;
    c1.afficher();
    c2->afficher();
    cout << "****PASSAGE PAR REFERENCE****" << endl;
    ClientRef cRef1("BERRADA", "SAMIR", "B234560", d1, acc1);
    ClientRef* cRef2 = new ClientRef("RAHIM", "SALMA", "D213409", d2, *acc2);
    cRef1.afficher();
    cRef2->afficher();
    //operations compte
    cout << "****PASSAGE PAR ADRESSE****" << endl;
    acc1.deposer(200);
    cout << "Apres depot:" << endl;
    c1.afficher();
    cout << "*****************" << endl;
    cout << "****PASSAGE PAR REFERENCE****" << endl;
    acc2->retirer(1000);
    cout << "Apres retrait :" << endl;
    cRef2->afficher();
    //destruction
    delete c2;
    delete acc2;
    delete cRef2;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
