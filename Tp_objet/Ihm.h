#include"Gestion.h"
class IHM
{

	Gestion* gest;

public:

	IHM();
	~IHM();

	void Start(Gestion* gest);
private:
	int AfficheMenu();
	int ChoixEtudiant();
	void Modifier(Article*);
	void Afficher(Article*);
	void AfficherTout();
};