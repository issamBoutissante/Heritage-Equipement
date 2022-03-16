#include <iostream>
#include"Ordinateur.h"
#include"Table.h"
int main()
{
	Ordinateur o("O123",*new Date(9,3,2022), Etat::operationnel,10000, "hp", 142);
	o.Afficher();
	cout << "\n\n";

	Table t("T2332", *new Date(9, 3, 2021), Etat::nonOperationnel, 29999, 423423, 4234234);
	t.Afficher();
	cout << "\n\n";

	cout << (o.getDate() > t.getDate() ? "L'ordinateur est le plus recent." : "La Table est la plus recente.") << endl;
	return 200;
}