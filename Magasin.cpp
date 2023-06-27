#include <iostream>
#include <vector>
#include "Magasin.hpp"
#include "Produit.cpp"



int Magasin::compteurInstance = 0;
Magasin* Magasin::_ptr = NULL;



void Magasin::constructeurMagasin()
{
	if (compteurInstance == 0)
	{
		_ptr = new Magasin;
		compteurInstance++;
		std::cout << "Magasin cree !" << std::endl;
	}
	else
	{
		std::cout << "Erreur fatale : tentative d'instancier un magasin deja existant ! \n";
	}
}

Magasin* Magasin::getMagasin()
{
	if (compteurInstance == 1)
	{
		return _ptr;
	}
	return NULL;

};

Magasin::~Magasin()
{

};

Magasin::Magasin()
{
};



