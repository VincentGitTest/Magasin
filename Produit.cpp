/*
Auteur : Vincent
Classe produit

*/


#include <iostream>
#include "Produit.hpp"



Produit::Produit(std::string _nom, double _prix)
{
	nom = _nom;
	prix = _prix;
}


Produit::~Produit()
{

}

double Produit::getPrix()
{
	return prix;
}

std::string Produit::getNom()
{
	return nom;
}


