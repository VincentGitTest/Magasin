/*
Auteur : Vincent
Classe produit

*/


#include <iostream>



class Produit
{
protected:
	std::string nom;
	double prix;
	int quantite;

public:
	Produit(std::string _nom, double _prix)
	{
		nom = _nom;
		prix = _prix;
	}


	~Produit()
	{

	}







};
