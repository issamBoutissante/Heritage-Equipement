#include "Date.h"
Date::Date(int jour, int mois, int anne) {
	this->jour = jour;
	this->mois = mois;
	this->anne = anne;
}
string Date::ToString() {
	return to_string(this->jour )+ "/" + to_string(this->mois) +"/"+ to_string(this->anne);
}
bool Date::operator>(Date date) {
	return (this->anne * 1000 + this->mois * 100 + this->jour) > (date.anne * 1000 + date.mois * 100 + date.jour);
}
bool Date::operator<(Date date) {
	return (this->anne * 1000 + this->mois * 100 + this->jour) > (date.anne * 1000 + date.mois * 100 + date.jour);
}
bool Date::operator==(Date date) {
	return (this->anne * 1000 + this->mois * 100 + this->jour) > (date.anne * 1000 + date.mois * 100 + date.jour);
}
