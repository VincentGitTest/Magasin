
#include "Menu.hpp"
#include <iostream>
#include <sstream>

void menu(std::vector<Produit*> listeProd, Personne* personne)
{
	std::cout << "Bonjour " << personne->getNom() << " Voici la liste des produits." << std::endl;
	afficherProduit(listeProd);
	std::cout << "Tapez le numero associe pour acheter un produit, tapez argent pour voir votre monnaie," << std::endl;
	std::cout << "tapez panier pour afficher ce que vous avez, tapez quitter pour quitter" << std::endl;


	bool quit = false;
	std::string command;
	int command2 = -1;
	while (quit == false)
	{
		std::cin >> command;

		command2 = -1;
		try
		{
			int command2 = stoi(command);
			if (command2 > -1)
			{

				//getProduit(id)

				Produit* prod = getProduitById(listeProd, command2);
				personne->acheterProduit(prod);

				


			}
		}
		catch (...)
		{
			if (command == "argent")
			{
				std::cout << "il vous reste " << personne->getArgent() << std::endl;
			}

			if (command == "panier")
			{
				personne->afficherPanier();
			}

			if (command == "quitter")
			{
				quit = true;
			}
		}







	}
}

void afficherProduit(std::vector<Produit*> listeProd)
{
	for (int i = 0; i < listeProd.size(); i++)
	{
		Produit* prod = listeProd[i];
		std::cout << "Nom : " << prod->getNom() << ", Prix : " << prod->getPrix() << ", id : " << prod->getId() << std::endl;
	}




}

Produit* getProduitById(std::vector<Produit*> listeProd, int id)
{

	for (int i = 0; i < listeProd.size(); i++)
	{
		if (id == listeProd[i]->getId())
		{
			return listeProd[i];
		}
	}

	std::cout << "id non existant" << std::endl;

	return NULL;

}

