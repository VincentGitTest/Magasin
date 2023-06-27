/*Auteur: Malika
Definition Class Magasin
*/
#include <iostream>
#include <vector>
#include "Magasin.hpp"
#include "Produit.hpp"




int Magasin::compteurInstance = 0;
Magasin* Magasin::ptr = NULL;



void Magasin::constructeurMagasin()
{
	if (compteurInstance == 0)
	{
		ptr = new Magasin;
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
		return ptr;
	}
	return NULL;

};

Magasin::~Magasin()
{

};

Magasin::Magasin()
{

};

void Magasin::insertProduit(Produit *produit)
{
	listeProduits.push_back(*produit);
}

