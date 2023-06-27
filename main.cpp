
/*
Auteurs : Vincent, Malika

Fonction main

*/




#include <fstream>
#include <vector>
#include <sstream>
#include "Personne.hpp"
#include "Produit.hpp"


void recupererProduitExterne()
{
	// Recuperation depuis le fichier voulu
	std::string fname = "Produits.csv";

	std::vector<std::vector<std::string>> content;
	std::vector<std::string> row;
	std::string line, word;

	std::fstream file(fname, std::ios::in);


	// Recuperation des lignes
	if (file.is_open())
	{
		while (getline(file, line))
		{
			row.clear();

			std::stringstream str(line);

			while (std::getline(str, word, ','))

			row.push_back(word);
			content.push_back(row);
		}
	}
	else
	{
		std::cout << "Could not open the file\n";
	}
		


	// Listes de recuperation des noms et des prix
	std::vector<std::string> noms;
	std::vector<int> prix;


	// Lecture des lignes
	for (int i = 0; i < content.size(); i++)
	{
		for (int j = 0; j < content[i].size(); j++)
		{
			if (i == 0)
			{
				noms.push_back(content[i][j]);
			}
			if (i == 1)
			{
				prix.push_back(stoi(content[i][j]));
			}
		}
	}

	for (int i = 0; i < noms.size(); i++)
	{
		Produit *produit = new Produit(noms[i], prix[i]);

		// METTRE ICI FONCTION AJOUT PRODUIT

	}

}

void menu(Personne* personne)
{
	std::cout << "Bonjour " << personne->getNom() << " Voici la liste des produits." << std::endl; 

	std::cout << "Tapez le numero associe pour acheter un produit, tapez argent pour voir votre monnaie, tapez quitter pour quitter" << std::endl;
	
	
	bool quit = false;
	std::string command;

	while (quit == false)
	{
		std::cin >> command;

		try 
		{

		}
		catch () 
		{
		}


	}


}

int main()
{
    

    Personne* personne = new Personne("Jack", 30);


    Produit* orange = new Produit("Orange", 3);
    Produit* rasoir = new Produit("Rasoir", 15);

    personne->acheterProduit(orange);
    personne->acheterProduit(rasoir);
    personne->acheterProduit(rasoir);

    personne->afficherPanier();
    std::cout << personne->getArgent() << std::endl;

	//menu(personne);

	std::string test = "3";

	std::cout << stoi(test);

    delete(personne);




    return 0;
}

