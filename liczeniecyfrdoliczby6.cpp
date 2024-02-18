#include <iostream>
#include <string>
using namespace std;

int ilecyfr(int b)
{

    // ilosc cyfr
    int wynik = 0;
    while (b % 10 >= 1)
    {

        b = b / 10;
        wynik = wynik + 1;
    }

    return wynik;
}

int main()
{

    int wprowadzonaLiczba;
    float podzielonaLiczba;
    cout << "Podaj liczbe calkowita (a): ";
    cin >> wprowadzonaLiczba;
    int poczatkowaLiczba = wprowadzonaLiczba;
    int pozycja = 0, iloscCyfr = 0;
    // a = a / ilecyfr(a);
    iloscCyfr = ilecyfr(wprowadzonaLiczba);

    while (wprowadzonaLiczba % 10 != 6 && wprowadzonaLiczba > 0 && wprowadzonaLiczba != 0)
    {
        cout << "'a' to: " << wprowadzonaLiczba << endl;
        podzielonaLiczba = wprowadzonaLiczba / 10;
        // kownertuj float na int
        wprowadzonaLiczba = static_cast<int>(podzielonaLiczba);
        pozycja++;
    }

    if (poczatkowaLiczba % 10 == 6 &&
            pozycja == 0 ||
        pozycja != iloscCyfr)

        cout << "liczba 6 znajduje sie na " << iloscCyfr - pozycja << " pozycji";
    else
        cout << "Liczba 6 nie wystepuje w liczbie a";
    return 0;
}