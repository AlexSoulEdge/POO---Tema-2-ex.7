#include "FirmaDistributie.h"
#include <exception>

template <class T> unsigned int FirmaDistributie<T>::numar_persoane = 0;
//template <class T> T FirmaDistributie<T>::numar_actori = 0;*/

template <class T> FirmaDistributie<T>::FirmaDistributie() : dimensiune_F(0)
{
    F = NULL;
}

template <class T> FirmaDistributie<T>::FirmaDistributie(const int &nr_filme, Film FV[], Personal *P) : dimensiune_F(nr_filme)
{
    if(!dimensiune_F)
        F = NULL;
    else
        F = new Film[nr_filme];

    Baza = &P;
}

template <class T> FirmaDistributie<T>::~FirmaDistributie()
{
    if(F != NULL)
        delete [] F;
}

template <class T> FirmaDistributie<T>::FirmaDistributie(const FirmaDistributie &other)
{
    /*if(this == &other)
        return *this;*/
    try{
    if(!dimensiune_F) throw "Insufficient memory on Filme.";
    }

    catch(string e)
    {
        cout << "Exception occured" << endl << e;
    }

    F = new Film[dimensiune_F];
    for(int i = 0; i < dimensiune_F; i ++)
        F[i] = other.F[i];

    //return *this;
}

/*template <class T> FirmaDistributie<T>::FirmaDistributie& operator= (const FirmaDistributie &other)
{
    if(!dimensiune_F) throw out_of_range("Insufficient memory on Filme.");

    for(int i = 0; i < dimensiune_F; i ++)
        F[i] = other.F[i];
}*/


template <class T> istream& operator>> (istream &in, FirmaDistributie<T> &FD)
{
    in >> FD.dimensiune_F;

    for(int i = 0; i < FD.dimensiune_F; i ++)
        in >> FD.F[i];

    in >> FD.Baza;

    return in;
}
