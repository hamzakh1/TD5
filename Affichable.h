#include <iostream>

class Affichable
{
public:
	//Cr�er une classe compl�tement abstraite(interface) nomm�e Affichable ayant deux m�thodes virtuelles
	//	pures nomm�es afficher et changerCouleur
	virtual void afficher(ostream& os)=0; //pure virtual fct
	virtual void changerCouleur(ostream& os, int couleur)=0;


};