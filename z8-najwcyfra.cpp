#include <iostream>
using namespace std;

int cyfra(int liczba)
{
    int ost_cyfra = liczba % 10;

    while (liczba > 10 && ost_cyfra != 0)
    {
        liczba = liczba / 10;

        if (liczba % 10 <= ost_cyfra)
        {
            ost_cyfra = liczba % 10;
        }
    }

    return ost_cyfra;
}

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    if (!cin.fail() && liczba > 0)
        cout << endl
             << "Wynik to: " << cyfra(liczba);
    else
        cout << endl
             << "Podano niepoprawna liczbe ";
}