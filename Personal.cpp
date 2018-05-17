#include "Personal.h"
#include <string>
#include <iostream>

using namespace std;

unsigned int Personal::numar_angajati = 0;

Personal::Personal()
{
    numar_angajati ++;
    //FirmaDistributie<T>::numar_persoane++;
}

Personal::Personal(string pnume, string pcnp, string pnume_film, unsigned int x) : nume(pnume), cnp(pcnp), nume_film(pnume_film), procent(x)
{
    numar_angajati ++;
}

Personal::~Personal()
{
    numar_angajati --;
}

Personal::Personal(const Personal& other)
{
    nume = other.nume;
    cnp = other.cnp;
    nume_film = other.nume_film;
    procent = other.procent;

    numar_angajati ++;
}

Personal& Personal::operator=(const Personal& other)
{
    if (this == &other) return *this; // handle self assignment
    nume = other.nume;
    cnp = other.cnp;
    nume_film = other.nume_film;
    procent = other.procent;

    return *this;
}

string Personal::get_nume() const
{
    return nume;
}

string Personal::get_cnp() const
{
    return cnp;
}

string Personal::get_nume_film() const
{
    return nume_film;
}

unsigned int Personal::get_procent() const
{
    return procent;
}

void Personal::set_nume(string s)
{
    nume = s;
}

void Personal::set_cnp(string s)
{
    cnp = s;
}

void Personal::set_nume_film(string s)
{
    nume_film = s;
}
void Personal::set_procent(unsigned int x)
{
    procent = x;
}

string Personal::fix_names(string s)
{
    string temp;
    int number_of_spaces = 0;

    for(int i = 0; i < s.size(); i ++)
    {
        if(isupper(s[i]))
            number_of_spaces ++;
    }

    temp.resize(s.size() + number_of_spaces);

    int k = 0;
    for(int i = 0; i < s.size(); i ++)
    {
        temp[k] = s[i];
        if(isupper(s[i]) && i)
        {
            temp[k] = ' ';
            k++;
            temp[k] = s[i];
        }

        k ++;
    }

    return temp;
}

istream& operator>> (istream &in, Personal &personal)
{
    string temp_nume, temp_nume_film;

    in >> temp_nume >> personal.cnp >> temp_nume_film >> personal.procent;

    personal.nume = personal.fix_names(temp_nume);
    personal.nume_film = personal.fix_names(temp_nume_film);

    return in;
}
