#pragma once
#include "Equipement.h"
class Imprimante:public Equipement
{
private:
	string marque;
	int numSerie;
public:
	Imprimante(string code, Date& date, Etat etat, float prixAchat, string marque,int numSerie);
	void Afficher();
};

