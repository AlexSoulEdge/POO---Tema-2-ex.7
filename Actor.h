#ifndef ACTOR_H
#define ACTOR_H

#include "Personal.h"


class Actor : public Personal
{
    bool e_personaj_principal;

    public:
        Actor();
        Actor(string xnume, string xcnp, string xnume_film, unsigned int xprocent, bool xe_personaj_principal);
        ~Actor();
        Actor(const Actor& other);
        Actor& operator=(const Actor& other);

        //getters

        //setters
        void set_e_personaj_principal(bool x);

        //overloading
        friend istream& operator>> (istream &in, Actor &actor);

        //others
        void check_Actor();
        void print_data();

        // NOTE: Daca definesc >> atunci trebuie sa adaug functia check_Actor() la final pentru corectie procent;

};

#endif // ACTOR_H
