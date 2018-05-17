#include "Regizor.h"

Regizor::Regizor() : suma(0)
{
    //ctor
}

Regizor::Regizor(string pnume, string pcnp, string pnume_film, unsigned int xprocent, unsigned int xsuma) : Personal(pnume, pcnp, pnume_film, xprocent), suma(xsuma)
{

}

Regizor::~Regizor()
{
    //dtor
}

istream& operator>> (istream &in, Regizor &regizor)
{
    string temp_nume, temp_cnp, temp_nume_film;
    unsigned int temp_procent;

    in >> temp_nume >> temp_cnp >> temp_nume_film >> temp_procent >> regizor.suma;

    temp_nume = regizor.fix_names(temp_nume);
    regizor.set_nume(temp_nume);
    regizor.set_cnp(temp_cnp);
    temp_nume_film = regizor.fix_names(temp_nume_film);
    regizor.set_nume_film(temp_nume_film);
    regizor.set_procent(temp_procent);

    return in;
}

void Regizor::print_data()
{
    cout << "Tip personal: Regizor" << endl;
    cout << "Nume: " << get_nume() << endl;
    cout << "CNP: " << get_cnp() << endl;
    cout << "Nume film: " << get_nume_film() << endl;
    cout << "Procent din venit: " << get_procent() << endl;

    cout << "Suma regizor: " << suma << "$" << endl << endl;
}
