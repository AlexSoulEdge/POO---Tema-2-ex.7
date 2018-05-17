#include "FirmaDistributie.h"
#include <exception>

template <class T> unsigned int FirmaDistributie<T>::numar_persoane = 0;
//template <class T> T FirmaDistributie<T>::numar_actori = 0;*/

template <class T> FirmaDistributie<T>::FirmaDistributie() : dimensiune_F(0), dimensiune_P(0)
{
    F = NULL;
    P = NULL;
}

template <class T> FirmaDistributie<T>::FirmaDistributie(int nr_filme, vector <Film> FV, int nr_persoane, vector <Personal> PV) : dimensiune_F(nr_filme), dimensiune_P(nr_persoane)
{
    if(!dimensiune_F)
        F = NULL;
    else
        F = new Film[nr_filme];

    if(!dimensiune_P)
        P = NULL;
    else
        P = new Personal[nr_persoane];
}

template <class T> FirmaDistributie<T>::~FirmaDistributie()
{
    if(F != NULL)
        delete [] F;
    if(P != NULL)
        delete [] P;
}

template <class T> FirmaDistributie<T>::FirmaDistributie(const FirmaDistributie &other)
{
    /*if(this == &other)
        return *this;*/
    try{
    if(!dimensiune_F) throw "Insufficient memory on Filme.";
    if(!dimensiune_P) throw "Insufficient memory on Personal.";
    }

    catch(string e)
    {
        cout << "Exception occured" << endl << e;
    }

    F = new Film[dimensiune_F];
    for(int i = 0; i < dimensiune_F; i ++)
        F[i] = other.F[i];

    P = new Personal[dimensiune_P];
    for(int i = 0; i < dimensiune_P; i ++)
        P[i] = other.P[i];





    //return *this;
}

/*template <class T> FirmaDistributie<T>::FirmaDistributie& operator= (const FirmaDistributie &other)
{
    if(!dimensiune_F) throw out_of_range("Insufficient memory on Filme.");
    if(!dimensiune_P) throw out_of_range("Insufficient memory on Personal.");

    for(int i = 0; i < dimensiune_F; i ++)
        F[i] = other.F[i];
    for(int i = 0; i < dimensiune_P; i ++)
        P[i] = other.P[i];
}*/
