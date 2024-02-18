#include <iostream>
#include <string>

using namespace std;

int main()
{

    std::string wprowadzonaLiczba;
    float podzielonaLiczba;
    cout << "Podaj liczbe calkowita (a): ";
    cin >> wprowadzonaLiczba;
    int poz = wprowadzonaLiczba.find("6");

    if (poz > 0)
        cout
            << "liczba 6 znajduje sie na " << poz << " pozycji";
    else
        cout << "Liczba 6 nie wystepuje w liczbie a";
    return 0;
}