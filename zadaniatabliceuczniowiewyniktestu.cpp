#include <iostream>
#include <ctime>
using namespace std;


void maks(int tablica[])
{
    int Najwieksza = 0;

    for (int i = 0; i < 30; i++)
        if (tablica[i] > Najwieksza)
            Najwieksza = tablica[i];

    cout << "najwieksza to: " << Najwieksza << endl;
}


void mini(int tablica[])
{
    int Najmniejsza = 100;

    for (int i = 0; i < 30; i++)
        if (tablica[i] < Najmniejsza)
            Najmniejsza = tablica[i];

    cout << "najmniejsza to: " << Najmniejsza << endl;
}

void srednia(int tablica[])
{
    float suma = 0;
     for (int i = 0; i < 30; i++)
    {
        suma = suma + tablica[i];
    }

    cout << "suma: " << suma << endl;

    cout << "srednia: " << suma / 30 << endl;
} 

void zdawalnosc(int tab[])
{
    int tak = 0;
    int nie = 0;
    for (int i = 0; i < 30; i++)
    {
        if(tab[i] >= 50)
        {
            tak++;
        }
        else
        {
            nie++;
        }
    }

    cout << "zdalo: " << tak << endl;
    cout << "nie zdalo: " << nie << endl;
}
void wypisz(int tablica[]) // wypisuje wartosci tablicy po kolei iterujac po indeksach
{
    for (int i = 0; i < 30; i++)
    {   
        cout << tablica[i] << " ";
    }
    cout << endl;
}


int main()
{
    int tab[30] = {0}; // nadanie wartosci tablicy

    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        tab[i] = 1 + rand() % 100;
    }

    maks(tab);
    mini(tab);
    srednia(tab);
    zdawalnosc(tab);
    wypisz(tab);

    return 0;
}