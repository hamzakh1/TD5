
#include "Personnage.h"

class Heros : virtual public Personnage
{
public:
	Heros() = default;
	Heros(const string nom, const string titre, const string ennemi, vector<string> allies) : 
		Personnage(nom, titre), ennemi_(ennemi), allies_(allies) {}
	string getEnnemi() { return ennemi_; }
	vector<string> getAllies() { return allies_; }
	void printAllies(ostream& os, vector<string> allies_)
	{
		for (auto i : allies_) // maybe add && to auto (to be verified)
			os << i << endl;
	}
	void afficher(ostream& os)  //maybe add ostream& os if cout does not work
	{ 
		Personnage :: afficher(os);
		os << "Ennemi : " << ennemi_ << endl << "Allies : ";
		printAllies(os,allies_);
		
	}
	void changerCouleur(ostream& os, const char& couleur)  {
		Personnage::changerCouleur(os, couleur);
	}
	void addAllies(string ally)
	{
		allies_.push_back(ally);
	}
private:
	string ennemi_;
	vector<string> allies_;

};