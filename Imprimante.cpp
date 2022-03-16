#include "Imprimante.h"
#include<iostream>
Imprimante::Imprimante(string code, Date& date, Etat etat, float prixAchat, string marque, int numSerie) 
	:Equipement(code, date, etat, prixAchat) {
	this->marque = marque;
	this->numSerie = numSerie;
}
void Imprimante::Afficher() {
	Equipement::Afficher();
	cout << "Marque : " << this->marque << endl;
	cout << "Numero Serie : " << this->numSerie << endl;
}
