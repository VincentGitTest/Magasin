/*
Auteur : Vincent
Classe Personne


*/

#pragma once

#include <iostream>
#include <vector>
#include "Produit.hpp"




class Personne
{
protected:
	std::string nom;
	double argent;
	std::vector<Produit*> listeProduitPossede;

public:
	Personne(std::string _nom, double _argent);


	~Personne();


	void acheterProduit(Produit* produit);


	void setArgent(double _argent);

	double getArgent();

	void enleverArgent(double enlever);

	void ajouterArgent(double ajouter);

	void ajouterProduit(Produit* produit);

	void afficherPanier();

	std::string getNom();


};