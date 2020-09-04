//
//  Personnage.hpp
//  cpp-training
//
//  Created by Thomas Chastaingt on 04/09/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#ifndef Personnage_hpp
#define Personnage_hpp
#include <string>
#include <stdio.h>


class Personnage
{
    public:

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

    private:

    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettrestd:: devant string
    int m_degatsArme;
};

#endif /* Personnage_hpp */
