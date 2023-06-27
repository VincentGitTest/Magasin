/*
Auteur : Vincent
Classe Personne


*/

#include <iostream>
#include <vector>
#include "Produit.cpp"




class Personne
{
protected:
	std::string nom;
	double argent;
	std::vector<Produit> listeProduitPossede;

public:
	Personne(std::string _nom, double _argent)
	{
		nom = _nom;
		argent = _argent;
	}


	~Personne()
	{

	}







};