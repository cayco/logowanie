#include <iostream>
#include <string>

using namespace std;

bool znajdzlitere(string wyraz, char znak)
{
    int licznik = 0;
    int znalezione = 0;

    while (licznik < wyraz.size())
    {
        if (wyraz[licznik] == znak)
            znalezione++;
    }

    if (znalezione == 2)
        return true;
    else
        return false;
}

int szukajlitery(string wyraz)
{

    // dla kazdej litery z wyrazu znajdz druga taka sama litere

    int licznik = 0;

    while (licznik < wyraz.size())
    {

        // znajdz czy llitera z wyraz[licznik] wystepuje w wyraz

        if (wyraz.find(wyraz[licznik], licznik + 1) != std::string::npos)
            cout << "Znalezione";

        if ( znajdzlitere(wyraz, wyraz[licznik])  == true  )
            cout << "Znalezione";
        ; //

        licznik++;
    }
    return 0;
}

int main()
{
    string wyraz;
    cin >> wyraz;
    szukajlitery(wyraz);
}
