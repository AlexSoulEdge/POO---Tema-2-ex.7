#include "Film.h"
#include <string>

using namespace std;

Film::Film() : nume("0"), tip("0"), durata(0)
{
    //ctor
}

Film::Film(string pnume, string ptip, unsigned int x) : nume(pnume), tip(ptip), durata(x)
{

}

Film::~Film()
{
    //dtor
}

Film::Film(const Film& other)
{
    nume = other.nume;
    tip = other.tip;
    durata = other.durata;
}

Film& Film::operator=(const Film &other)
{
    if (this == &other) return *this; // handle self assignment
    //assignment operator
    nume = other.nume;
    tip = other.tip;
    durata = other.durata;
    return *this;
}

void Film::set_nume(string s)
{
    nume = s;
}

void Film::set_tip(string s)
{
    tip = s;
}

void Film::set_durata(unsigned int x)
{
    durata = x;
}

string Film::get_nume()
{
    return nume;
}

string Film::get_tip()
{
    return tip;
}

unsigned int Film::get_durata()
{
    return durata;
}

ostream& operator<< (ostream &out, const Film &film)
{
    out << "Denumire: " << film.nume << endl;
    out << "Tip: " << film.tip << endl;
    out << "Durata: " << film.durata << endl;

    return out;
}

istream& operator>> (istream &in, Film &film)
{
    in >> film.nume >> film.tip >> film.durata;

    return in;
}
