#pragma once
#include "Article.h"
#include <vector>


class Gestion
{
	vector<Article*> lesArticles;


public:
	Gestion();

	void AjouterArticle(Article* art);
	Article* LireUnArticle(int index);
	void SupprimerUnArticle(int index);

	int getNombreArticles();

};
