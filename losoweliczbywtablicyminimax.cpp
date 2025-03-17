#include <iostream>
#include <ctime>
using namespace std;

void wypelnij(int tablica[]) // wypisuje wartosci tablicy po kolei iterujac po indeksach
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        tablica[i] = 1 + rand() % 20;
    }
}
int maks(int tablica[])
{
    int Najwieksza = 0;

    for (int i = 0; i < 10; i++)
        if (tablica[i] > Najwieksza)
            Najwieksza = tablica[i];

    return Najwieksza;
}

int mini(int tablica[])
{
    int Najmniejsza = 20;

    for (int i = 0; i < 10; i++)
        if (tablica[i] < Najmniejsza)
            Najmniejsza = tablica[i];

    return Najmniejsza;
}
void wypisz(int tablica[]) // wypisuje wartosci tablicy po kolei iterujac po indeksach
{
    cout << mini(tablica) << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;
}
int main()
{
    int tab[10] = {0}; // nadanie wartosci tablicy
    wypelnij(tab);
    wypisz(tab);
    return 0;
}