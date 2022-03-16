#pragma once
#include<string>
#include "Date.h"
using namespace std;
enum Etat {
	operationnel,
	nonOperationnel
};
class Equipement
{
protected:
	string code;
	Date date;
	Etat etat;
	float prixAchat;
public:
	Equipement(string code,Date& date,Etat etat,float prixAchat);
	string getCode();
	Date getDate();
	Etat getEtat();
	float getPrixAchat();
	void Afficher();
};

