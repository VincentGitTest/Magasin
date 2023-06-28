
/*
Auteurs : Vincent, Malika

Fonction main

*/




#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Personne.hpp"
#include "Produit.hpp"
#include "Menu.hpp"
#include "Magasin.hpp"







int main()
{
    

    Personne* personne = new Personne("Jack", 30);


    Magasin::constructeurMagasin();

    Magasin* mag = Magasin::getMagasin();
    
    mag->recupererProduitExterne();

    std::vector<Produit*> listeProd = mag->recupererListeProduit();

    
	menu(listeProd, personne);




    delete(personne);

    return 0;
}

