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
	int id = NULL;
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

int Produit::getId()
{
	return id;
}

void Produit::setId(int newId)
{
<<<<<<< HEAD
	Produit::id= newId;
}

=======
	Produit::id = newId;
}
>>>>>>> main

