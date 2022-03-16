#include "Equipement.h"
#include<iostream>

Equipement::Equipement(string code, Date& date, Etat etat, float prixAchat) {
	this->code = code;
	this->date = date;
	this->etat = etat;
	this->prixAchat = prixAchat;
}
string Equipement::getCode() { return this->code; }
Date Equipement::getDate() { return this->date; }
Etat Equipement::getEtat() { return this->etat; }
float Equipement::getPrixAchat() { return this->prixAchat; }
void Equipement::Afficher() {
	cout << "Code : " << this->code<<endl;
	cout << "Date : " << this->date.ToString() << endl;
	cout << "Etat : " << (this->etat == Etat::operationnel?"operationnel":"non operationnel")<<endl;
	cout << "Prix d'achat : " << this->prixAchat << endl;
}
