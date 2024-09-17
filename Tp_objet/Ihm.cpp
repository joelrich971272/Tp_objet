#include"Ihm.h"
#include<iostream>
#include"Article.h"


using namespace std;

void IHM::AfficheMenu()
{
	int choix = 0;
	do
	{
		cout << "---==========---" << endl;
		cout << "Articles :" << magasin.getNombreArticles() << endl;
		cout << "---==========---" << endl;
		cout << "---== Menu ==---" << endl;

		cout << "1: Afficher les articles" << endl;
		cout << "2: Ajouter un Article" << endl;
		cout << "Votre choix :";
		cin >> choix;
		switch (choix)
		{case 1:
			ListerLesArticles();
			break;
		case 2 :
			AjouterUnArticle();
			break;
		case 3:
			SupprimerUnArticle();
			break;
		default:
			break;
		}
	} while (choix != 0);
	cout << "---==========---" << endl;
	cout << "Appuyez sur Entree pour terminer" << endl;
	cin >> choix;
}
void IHM::AjouterUnArticle()
{

	string nomArticle;
	double prixht;
	int qte;
	//
	cout << "---==========---" << endl;
	cout << "Nom    :";
	cin >> nomArticle;
	cout << "PrixHT :";
	cin >> prixht;
	cout << "Combien:";
	cin >> qte;
	//
	Article* nouveau = new Article(nomArticle);
	nouveau->prixHT = prixht;
	nouveau->stock = qte;
	magasin.AjouterArticle(nouveau);
}

void IHM::ListerLesArticles()
{
	int max = magasin.getNombreArticles();
	for (int i = 0; i < max; i++)
	{
		Article* temp = magasin.LireUnArticle(i);
		cout << "---====" << i << "====---" << endl;
		cout << "Nom    :";
		cout << temp->getNom() << endl;
		cout << "PrixHT :";
		cout << temp->prixHT << endl;
		cout << "Stock  :";
		cout << temp->stock << endl;
		cout << "---==========---" << endl;

	}
}
void Gestion::SupprimerUnArticle(int index)
{
	if ((index >= 0) && (index < getNombreArticles()))
	{
		int max = magasin.getNombreArticles();
		Article* temp = magasin.LireUnArticle(i);
		cout << "---====" << i << "====---" << endl;
		cout << "Nom    :";

		cout << temp->getNom() << endl;
		Article* temp = LireUnArticle(index);
		delete temp;
		lesArticles.erase(lesArticles.begin() + index);
	}
}

	
