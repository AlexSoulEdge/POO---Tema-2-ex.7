#ifndef FILM_H
#define FILM_H
#include <iostream>
#include <string>

using namespace std;


class Film
{
    string nume, tip;
    unsigned int durata; //in minute

    public:

        Film();
        Film(string pnume, string ptip, unsigned int x);
        ~Film();
        Film(const Film& other);
        Film& operator=(const Film& other);

        //getters
        string get_nume();
        string get_tip();
        unsigned int get_durata();

        //setters
        void set_nume(string s);
        void set_tip(string s);
        void set_durata(unsigned int x);

        //overloading
        friend ostream& operator<< (ostream &out, const Film &film);
        friend istream& operator>> (istream &in, Film &film);
};

#endif // FILM_H
