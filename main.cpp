#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "Film.h"
#include "Personal.h"
#include "Actor.h"
#include "Regizor.h"
#include "FirmaDistributie.h"

using namespace std;

/*string fix_names(string s)
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
}*/

int main()
{
    ifstream fin("date.in");
    int nr_filme, nr_actori, nr_regizori, nr_personal;

    fin >> nr_filme; Film F[nr_filme];
    for(int i = 0; i < nr_filme; i ++)
        fin >> F[i];

    fin >> nr_actori; Actor A[nr_actori];
    for(int i = 0; i < nr_actori; i ++)
        fin >> A[i];

    fin >> nr_regizori; Regizor R[nr_regizori];
    for(int i = 0; i < nr_regizori; i ++)
        fin >> R[i];

    fin >> nr_personal; Personal P[nr_personal];
    for(int i = 0; i < nr_personal; i ++)
        fin >> P[i];


    cout << "----------- Lista Filme: --------------" << endl;
    for(int i = 0; i < nr_filme; i ++)
        cout << F[i] << endl;

    cout << endl << "----------- Lista Regizori: --------------" << endl;
    for(int i = 0; i < nr_regizori; i ++)
        R[i].print_data();

    cout << endl << endl << endl << "----------- Lista Actori: --------------" << endl;
    for(int i = 0; i < nr_actori; i ++)
        A[i].print_data();


    cout << endl << endl << endl << "----------- Lista Personal: --------------" << endl;
    for(int i = 0; i < nr_personal; i ++)
        P[i].print_data();

    fin.close();

    return 0;
}
