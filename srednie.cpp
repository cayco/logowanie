/* Zadanie: Oblicz średnią wartość oraz różnicę między maksymalną a minimalną wartością w tablicy
Treść zadania:
Napisz program, który:
Utworzy tablicę o rozmiarze 15, przeznaczoną do przechowywania liczb rzeczywistych.
Wypełni tablicę losowymi liczbami rzeczywistymi z zakresu
(−20) do (50)
wyświetli wszystkie liczby z tablicy.
Znajdzie:
średnią wartość wszystkich liczb w tablicy, zaokrągloną do dwóch miejsc po przecinku,
wartość maksymalną i minimalną w tablicy,
różnicę między wartością maksymalną a minimalną.
Wyświetli wyniki: średnią wartość, wartość maksymalną, wartość minimalną oraz różnicę między nimi.
*/

#include <iostream>
using namespace std;

bool czypierwsza(int a)
{
    int dzielnik = 2;

    while (dzielnik <= a / 2 && a > 2)
    {
        if (a % dzielnik == 0)
        {
            return true;
        }
        dzielnik++;
    }
    return false;
}
int main()
{
    double tab[15];
    double suma = 0;

    srand(time(NULL));
    for (int i = 0; i < 15; i++)
    {
        tab[i] = -20 + static_cast<double>(rand()) / RAND_MAX * 70; // 0d -20 do 50
        suma += tab[i];
        cout << tab[i] << endl;
    }

    cout << "suma: " << suma << endl;
    cout << "srednia = " << suma / 15 << endl;

    double naw = -20;
    double naj = 50;

    for (int i = 0; i < 15; i++)
    {
        if (tab[i] > naw)
        {
            naw = tab[i];
        }
        if (tab[i] < naj)
        {
            naj = tab[i];
        }
    }
    cout << "wartosc minimalna : " << naj << endl;
    cout << "wartosc maksymalna : " << naw << endl;

    cout << "roznica najwiekszej i najmniejszej wartosci to: " << naw - naj << endl;
    cout << endl;

    for (int i = 0; i < 15; i++)
    {
        if (czypierwsza(tab[i]) == false && czypierwsza(tab[i] + 2) == false)
        {
            cout << tab[i] << " to liczba blizniacza" << endl;
        }
    }

    return 0;
}
