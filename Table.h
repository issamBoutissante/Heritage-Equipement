#pragma once
#include "Equipement.h"
class Table:public Equipement
{
private:
	float longueur;
	float largeur;
public:
	Table(string code, Date& date, Etat etat, float prixAchat, float longueur,float largeur);
	void Afficher();
};

