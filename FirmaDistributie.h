#ifndef FIRMADISTRIBUTIE_H
#define FIRMADISTRIBUTIE_H

#include "Film.h"
#include "Personal.h"
#include "Actor.h"
#include "Regizor.h"

#include <iostream>
#include <vector>
#include <string>

template <class T> class FirmaDistributie
{
    unsigned int dimensiune_F, dimensiune_P;
    Film *F;
    Personal *P;

    public:
        static T numar_persoane, numar_actori;

        FirmaDistributie();
        FirmaDistributie(int nr_filme, vector <Film> FV, int nr_persoane, vector <Personal> PV);
        virtual ~FirmaDistributie();
        FirmaDistributie(const FirmaDistributie &other);
        FirmaDistributie& operator= (const FirmaDistributie &other);

        //getters

        //setters

        //overloading


};

/*template <class T> class FirmaDistributie<unsigned>
{

};*/


#endif // FIRMADISTRIBUTIE_H
