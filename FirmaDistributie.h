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
    Personal *P, *Baza; // *P - vector, asemenea lui F

    //friend class Personal;

    public:
        static unsigned int numar_persoane;
        static T numar_actori;

        FirmaDistributie();
        FirmaDistributie(int nr_filme, vector <Film> FV, int nr_persoane, vector <Personal> PV);
        virtual ~FirmaDistributie();
        FirmaDistributie(const FirmaDistributie &other);
        FirmaDistributie& operator= (const FirmaDistributie &other);

        //getters

        //setters

        //overloading

        // ETEROGEN LIST
        void set(Personal *p) {Baza = p;} //numar_persoane ++;}
        void print_data(void)
        {
            Baza->print_data();
        }
        void print_persoane() {cout << numar_persoane;}


};

/*template <class T> class FirmaDistributie<unsigned>
{

};*/


#endif // FIRMADISTRIBUTIE_H
