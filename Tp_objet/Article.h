#pragma once
class Article
{
	string nom;
public:
	Article(string n);
	string getNom();
	double prixHT;
	int stock;
	void Afficherinfo();
	
};