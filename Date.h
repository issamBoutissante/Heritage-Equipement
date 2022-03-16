#pragma once
#include<string>
using namespace std;
class Date
{
private:
	int jour;
	int mois;
	int anne;
public:
	Date(){};
	Date(int jour,int mois,int anne);
	string ToString();
	bool operator>(Date date);
	bool operator<(Date date);
	bool operator==(Date date);
};

