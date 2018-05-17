#ifndef PERSONAL_H
#define PERSONAL_H
#include <string>
#include <iostream>
//#include "FirmaDistributie.h"

using namespace std;

class Personal
{
    string nume, cnp, nume_film;
    unsigned int procent;

    public:
        static unsigned int numar_angajati;

        //friend class FirmaDistributie;

        Personal();
        Personal(string pnume, string pcnp, string pnume_film, unsigned int x);
        ~Personal();
        Personal(const Personal& other);
        Personal& operator=(const Personal& other);

        //getters
        string get_nume() const;
        string get_cnp() const;
        string get_nume_film() const;
        unsigned int get_procent() const;


        //setters
        void set_nume(string s);
        void set_cnp(string s);
        void set_nume_film(string s);
        void set_procent(unsigned int x);

        //overloading
        friend istream& operator>> (istream &in, Personal &personal);

        //other
        virtual void print_data()
        {
            cout << "Tip personal: Normal" << endl;
            cout << "Nume: " << nume << endl;
            cout << "CNP: " << cnp << endl;
            cout << "Nume film: " << nume_film << endl;
            cout << "Procent din venit: " << procent << endl << endl;
        }

        string fix_names(string s);
};

#endif // PERSONAL_H
