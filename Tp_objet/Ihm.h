#pragma once
#include"Gestion.h"
class IHM
{
public:
	Gestion magasin;
	

	void AfficheMenu();
	void AjouterUnArticle();
	void ListerLesArticles();
	void SupprimerArticle();

};
