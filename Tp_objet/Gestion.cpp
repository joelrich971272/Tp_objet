#include"Gestion.h"

 Gestion::Gestion()
{

}
void Gestion::AjouterArticle(Article*art)
{
	lesArticles.push_back(art);
}
Article* Gestion::LireUnArticle(int index)
{
	if ((index >= 0) && (index < getNombreArticles()))
	{
		return lesArticles[index]; // lesArticles.at(i);
	}
	return nullptr;
}
void Gestion::SupprimerUnArticle(int index)
{
	if ((index >= 0) && (index < getNombreArticles()))
	{
		Article* temp = LireUnArticle(index);
		delete temp;
		lesArticles.erase(lesArticles.begin() + index);
	}
}
int Gestion::getNombreArticles()
{
	return lesArticles.size();
}

