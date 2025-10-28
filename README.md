## Description:
Ce projet en **C++** met en pratique les concepts de la **programmation orientée objet (POO)** à travers un exemple de **gestion de clients bancaires**.  
Il permet de comprendre la différence entre le **passage par adresse** et le **passage par référence** lors de la manipulation des objets.

Les classes principales (`Client`, `ClientRef`, `Compte`, `Date`) interagissent pour représenter un client, son compte et sa date de naissance.

## Fichiers:
- | **Date.h / Date.cpp** | Définit la classe `Date` pour gérer la date de naissance. 
- | **Compte.h / Compte.cpp** | Définit la classe `Compte` (numéro, solde, devise) avec les opérations `deposer()` et `retirer()`. 
- | **Client.h / Client.cpp** | Définit la classe `Client` qui contient un pointeur vers un compte (passage par adresse). 
- | **ClientRef.h / ClientRef.cpp** | Définit la classe `ClientRef` qui contient une référence vers un compte (passage par référence). 
- | **ex_Client.cpp** | Programme principal : Exemple d'utilisation(création des objets, affichage et test des opérations).
- | **C_Courant.h/C_Courant.cpp** | Définit classe C_Courant qui est héritée de la classe Compte
- | **CEpargne.h/CEpargne.cpp** | Définit classe CEpargne qui est héritée de la classe Compte
## ⚙️ Fonctionnalités

- **Création et affichage d’un client** avec ses informations personnelles (nom, prénom, CIN, date de naissance).
- **Association d’un compte bancaire** à un client (numéro, solde, devise).
- **Association héritage** entre Compte(Classe mère), C_Courant et CEpargne  (classe filles).
- **Dépôt et retrait d’argent** sur un compte.
- **Démonstration du passage par adresse et par référence** à travers deux classes :
  - `Client` → manipulation via pointeur (`Compte*`)
  - `ClientRef` → manipulation via référence (`Compte&`)
