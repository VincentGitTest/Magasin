/*Auteur: Malika
Definition Class Magasin
*/
#include <iostream>
#include <vector>
#include "Magasin.hpp"
#include "Produit.hpp"
#include <sstream>
#include <fstream>




int Magasin::compteurInstance = 0;
Magasin* Magasin::ptr = NULL;



void Magasin::constructeurMagasin()
{
	if (compteurInstance == 0)
	{
		ptr = new Magasin;
		compteurInstance++;
		std::cout << "Magasin cree !" << std::endl;
	}
	else
	{
		std::cout << "Erreur fatale : tentative d'instancier un magasin deja existant ! \n";
	}
}

Magasin* Magasin::getMagasin()
{
	if (compteurInstance == 1)
	{
		return ptr;
	}
	return NULL;

};
//destructeur Magasin
Magasin::~Magasin()
{

};

Magasin::Magasin()
{

};

//insertion produit manuellement
void Magasin::insertProduit(Produit *produit)
{
	listeProduits.push_back(*produit);
}

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
        Produit* produit = new Produit(noms[i], prix[i]);

        Magasin::insertProduit(produit);

    }

}