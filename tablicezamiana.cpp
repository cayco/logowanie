// 1. wczytaj zmienne i tablice
// 2. dzieki petli nadaj wartosc elementom tablicy
// 3. zamien pierwszy element z drugim

#include <iostream>
using namespace std;

int main()
{
    int k, x, l;
    cout << "Podaj dlugosc tablicy: " << endl;
    cin >> k;

    int d = 0; // zmienna do petli

    int tablica[k];

    while (d < k)
    {
        cout << "Podaj " << d + 1 << " element tablicy: ";
        cin >> tablica[d];
        d++;
    }
    x = tablica[0];
    l = tablica[k-1];
    tablica[0] = l;
    tablica[k-1] = x;
// n=0
// while ( z == 1 && n = k-1 )
// {
//l = tab[n]
//m = tab[n+1]

//if l > m
//    tab[n] = m
//    tab[n+1] = l
//else
//    z = 0
//    n++;
{
    int m = 0;
    while(m < k)
    {
        cout << tablica[m] << endl;
        m++;
    }

    return 0;
}
