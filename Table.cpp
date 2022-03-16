#include "Table.h"
#include<iostream>
Table::Table(string code, Date& date, Etat etat, float prixAchat, float longueur, float largeur)
	:Equipement(code, date, etat, prixAchat) {
	this->longueur = longueur;
	this->largeur = largeur;
}
void Table::Afficher() {
	Equipement::Afficher();
	cout << "Longueur : " << this->longueur<<endl;
	cout << "Largeur : " << this->largeur << endl;
}
