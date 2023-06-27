/*
Auteur : Vincent
Classe Personne


*/

#include <iostream>
#include <vector>
#include "Produit.hpp"
#include "Personne.hpp"




Personne::Personne(std::string _nom, double _argent)
{
	nom = _nom;
	argent = _argent;
	listeProduitPossede;
}


Personne::~Personne()
{

}


void Personne::acheterProduit(Produit* produit)
{
	double prixProduit = produit->getPrix();
	if (argent - prixProduit > 0)
	{
		ajouterProduit(produit);
		enleverArgent(prixProduit);
	}


	else
	{
		std::cout << "Impossibilite d'acheter, il vous manque " << prixProduit - argent << " pour acheter le produit" << std::endl;
	}
}


void Personne::setArgent(double _argent)
{
	argent = _argent;
}

double Personne::getArgent()
{
	return argent;
}

void Personne::enleverArgent(double enlever)
{
	argent -= enlever;
}

void Personne::ajouterArgent(double ajouter)
{
	argent += ajouter;
}

void Personne::ajouterProduit(Produit* produit)
{
	listeProduitPossede.push_back(produit);
}

void Personne::afficherPanier()
{

	for (int i = 0; i < listeProduitPossede.size(); i++)
	{
		std::cout << listeProduitPossede[i]->getNom() << std::endl;
	}

}


