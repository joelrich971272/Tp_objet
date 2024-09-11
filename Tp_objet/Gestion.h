#pragma once
#include "Article.h"
class Gestion
{
	vector<Article*>* listeArticle;


public:
	Gestion();
	~Gestion();

	int getTaille();

	Article* Ajouter();
	Article* LireAt(int pos);
	bool Supprimer(int pos);
};
