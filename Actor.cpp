#include "Actor.h"
#include <string>
#include <iostream>

using namespace std;

Actor::Actor() : Personal()
{
    e_personaj_principal = 0;
}

Actor::Actor(string xnume, string xcnp, string xnume_film, unsigned int xprocent, bool xe_personaj_principal) : Personal(xnume, xcnp, xnume_film, xprocent)
{
    e_personaj_principal = xe_personaj_principal;
    check_Actor();
}

Actor::~Actor()
{
    //dtor
}

Actor::Actor(const Actor& other) : Personal(other)
{
    e_personaj_principal = other.e_personaj_principal;
}

Actor& Actor::operator=(const Actor& other)
{
    if (this == &other) return *this; // handle self assignment

    set_nume(other.get_nume());
    set_cnp(other.get_cnp());
    set_nume_film(other.get_nume_film());
    set_procent(other.get_procent());

    e_personaj_principal = other.e_personaj_principal;
    return *this;
}

void Actor::set_e_personaj_principal(bool x)
{
    e_personaj_principal = x;
}

istream& operator>> (istream &in, Actor &actor)
{
    string temp_nume, temp_cnp, temp_nume_film;
    unsigned int temp_procent;

    in >> temp_nume >> temp_cnp >> temp_nume_film >> temp_procent >> actor.e_personaj_principal;

    temp_nume = actor.fix_names(temp_nume);
    actor.set_nume(temp_nume);
    actor.set_cnp(temp_cnp);
    temp_nume_film = actor.fix_names(temp_nume_film);
    actor.set_nume_film(temp_nume_film);
    actor.set_procent(temp_procent);

    return in;
}


void Actor::check_Actor()
{
    if(e_personaj_principal)
        set_procent(get_procent() + 10);
}

void Actor::print_data()
{
    cout << "Tip personal: Actor" << endl;
    cout << "Nume: " << get_nume() << endl;
    cout << "CNP: " << get_cnp() << endl;
    cout << "Nume film: " << get_nume_film() << endl;
    cout << "Procent din venit: " << get_procent() << endl;
    cout << "E personaj principal? : ";

    if(e_personaj_principal)
        cout << "Da.";
    else cout << "Nu.";

    cout << endl << endl;
}
