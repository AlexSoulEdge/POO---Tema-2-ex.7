#ifndef REGIZOR_H
#define REGIZOR_H

#include "Personal.h"


class Regizor : public Personal
{
    unsigned int suma;

    public:
        Regizor();
        Regizor(string pnume, string pcnp, string pnume_film, unsigned int xprocent, unsigned int xsuma);
        ~Regizor();

        //getters

        //setters

        //overloading
        friend istream& operator>> (istream &in, Regizor &regizor);

        //others
        void print_data();

};

#endif // REGIZOR_H
