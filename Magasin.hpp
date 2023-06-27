#pragma once


#include <iostream>
#include <vector>


class Magasin
{
public:
	static void constructeurMagasin();
	static Magasin* getMagasin();
	~Magasin();


private:
	static int compteurInstance;
	static Magasin* _ptr;
	//std::vector<Produit> _listeProduits;

	Magasin();
};

