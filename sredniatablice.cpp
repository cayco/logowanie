using namespace std;
#include <iostream>

int main()
{
    int liczby[6];
    int licznik = 0;
    int suma = 0;     // suma liczb w tablicy
    int srednia = 0;  // srednia liczb w tablicy
    int roznica = 0;  // zmienna pomocnicza, ktora w petli while pozwala
    int kandydat = 0; // zmienna ktora pozwala zapisac wartosc pozadanej wartosci na okreslonej pozycji w tablicy
    while (licznik < 6)
    {
        cout << "Podaj liczbe: ";
        cin >> liczby[licznik];
        if (cin.fail())
        {
            cout << "Nie wprowadzono liczby typu int" << endl;
            return -1; // wyjscie z programu z kodem -1
        }
        cout << endl;
        licznik++;
    }
    licznik = 0;

    while (licznik < 6) // w tym while licze srednia
    {
        suma += liczby[licznik];
        licznik++;
    }
    srednia = suma / 6;

    licznik = 0;
    kandydat = liczby[licznik];
    roznica = abs(kandydat - srednia);

    while (licznik < 6)
    {
        licznik++;

        

        if (liczby[licznik] - srednia < roznica)
        {
            cout << suma << endl;
            cout << srednia << endl;
            kandydat = liczby[licznik];
            roznica = abs(kandydat - srednia);
        }
    }

    cout << "Wynik to: " << kandydat;
    return 0;
}