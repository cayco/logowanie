#include <iostream>
using namespace std;

int sumacyfr(int liczba)
{
    int sumacyfr=0;
    // suma cyfr w liczbie

    while (liczba > 10)
    {
        sumacyfr += liczba % 10;
        liczba = liczba / 10;
    }

    sumacyfr += liczba;

    return sumacyfr;
}

int ilecyfr(int liczba)
{
    int ile = 0;

    while (liczba > 10)
    {
        ile++;
        liczba = liczba / 10;
    }
    ile++;

    return ile;
}
int srednia(int liczba)
{
    int srednia = 0;

    srednia = sumacyfr(liczba) / ilecyfr(liczba);

    return srednia;
}

int main()
{
    int liczba;
    cout << "podaj liczbe: ";
    cin >> liczba;
    cout << "Srednia to: "<< srednia(liczba) <<endl;
}