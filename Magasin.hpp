/*Auteur: Malika
Definition Class Magasin
*/
#pragma once


#include <iostream>
#include <vector>
#include "Produit.hpp"

class Magasin
{
public:
	static void constructeurMagasin();
	static Magasin* getMagasin();
	~Magasin();
	void insertProduit(Produit* produit);

private:
	static int compteurInstance;
	static Magasin* ptr;
	std::vector<Produit> listeProduits;

	Magasin();
};

