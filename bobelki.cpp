// n=0
// while ( z == 1 && n = k-1 )
// {
// l = tab[n]
// m = tab[n+1]

// if l > m
//     tab[n] = m
//     tab[n+1] = l
// else
//     z = 0
//     n++;

// 1. wczytaj zmienne i tablice
// 2. dzieki petli nadaj wartosc elementom tablicy
// 3. zamien pierwszy element z drugim

#include <iostream>
using namespace std;

int main()
{
    int n = 0, tablicanij, tablican, k;
    bool przestawienie = false;

    int tab[9];
    tab[0] = 7;
    tab[1] = 6;
    tab[2] = 2;
    tab[3] = 9;
    tab[4] = 5;
    tab[5] = 3;
    tab[6] = 7;
    tab[7] = 2;
    tab[8] = 0;

    k = sizeof(tab) / sizeof(tab[0]);
    cout << k << "\n\n\n";

    do
    {
        przestawienie = 0;
        tablican = tab[n];
        tablicanij = tab[n + 1];

        if (tablican > tablicanij)
        {
            cout << tab[n] << "\n \n";
            tab[n] = tablicanij;
            tab[n + 1] = tablican;
            przestawienie = true; // bylo przestawienie
            n = 0;
        }
        n++;
        cout << "n: " << n << "\n";
        cout << "k: " << k << "\n";
    }
    while (przestawienie && n < k);


    cout << "\n \n";

    for (int i = 0; i < k; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
    return 0;
}
