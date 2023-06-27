#pragma once

#include <iostream>


class Produit
{
protected:
	std::string nom;
	double prix;

public:
	Produit(std::string _nom, double _prix);



	~Produit();


	double getPrix();


	std::string getNom();




};


