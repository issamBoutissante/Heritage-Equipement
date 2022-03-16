#pragma once
#include "Equipement.h"
class Ordinateur:public Equipement
{
private:
	string marque;
	int taille;
public:
	Ordinateur(string code, Date& date, Etat etat, float prixAchat,string marque,int taille);
	void Afficher();
};

