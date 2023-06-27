
/*
Auteurs : Vincent, Malika

Fonction main

*/


#include <iostream>
#include <vector>

#include "Magasin.hpp"
#include "Produit.hpp"
#include "Personne.hpp"




int main()
{

    Magasin::constructeurMagasin();
    delete Magasin::getMagasin();
    return 0;
}

