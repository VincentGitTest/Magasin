
#include "Menu.hpp"
#include <iostream>
#include <sstream>

void menu(Personne* personne)
{
	std::cout << "Bonjour " << personne->getNom() << " Voici la liste des produits." << std::endl;

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

				std::cout << "id number : " << command2 << std::endl;

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