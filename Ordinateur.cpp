#include "Ordinateur.h"
#include<iostream>

Ordinateur::Ordinateur(string code, Date& date, Etat etat, float prixAchat, string marque, int taille)
	:Equipement(code,date,etat,prixAchat) {
	this->marque = marque;
	this->taille = taille;
}
void Ordinateur::Afficher() {
	Equipement::Afficher();
	cout << "Marque : " << this->marque << endl;
	cout << "Taille : " << this->taille << endl;
}