#include <iostream>
using namespace std;
int czy_pierwsza(int l)
{
    // liczba pierwsza to taka liczba ktora sie nie dzieli przez zadna z liczb od 2 do niej samej
    //  11 - nie dzieli się przez zadna z liczb od niej mniejsza i wieksza lub rowna niz 2

    int d = 2;
    //    cout << "Sprawdzam czy " << l << " to liczba pierwsza" << endl;

    while (l > d)
    {
        if ((l % d) == 0)
        {

            return 1; // to nie jest liczba pierwsza
        }
        //
        // cout << l << " to nie liczba pierwsza " << endl;
        d += 1;
    }
    return 0;
}
int dzielniki(int liczba)
{
    int dzielnik = 2;
    int liczba_poczatkowa = liczba;

    while (dzielnik < liczba_poczatkowa / 2)
    {
        if (liczba % dzielnik == 0 && czy_pierwsza(dzielnik) == 0)
            cout << dzielnik << endl;

        if (liczba % dzielnik != 0)
            dzielnik++;
        else
            liczba = liczba / dzielnik;
    }

    return 0;
}

int main()
{
    int liczba;
    cin >> liczba;
    dzielniki(liczba);
}
