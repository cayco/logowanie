using namespace std;
#include <iostream>

/* N-ta liczba pierwsza
Zdefiniuj funkcję pierwsza(int n), której parametrem będzie liczba naturalna n, a wynikiem – n-ta liczba pierwsza. Sprawdź działanie funkcji dla podanych poniżej parametrów.

Wynikiem funkcji pierwsza(7) jest 17.
Wynikiem funkcji pierwsza(25) jest 97.
*/

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
        //cout << l << " to nie liczba pierwsza " << endl;
        d += 1;
    }
    return 0;
}

int pierwsza(int liczba)
{
    int licznik = 0;         // licznik liczb pierwszych - ile jest liczb pierwszych
    int odliczanie = 2;      // do odliczania kolejnych liczb od 1 do nieskonczonosci
    while (licznik < liczba) // sprawdza ile zostalo juz znalezionych liczb pierwszych
    {
        odliczanie += 1; // w kazdym przypadku zwieksz licznik, tzn. spradz kolejna liczbe

        if (czy_pierwsza(odliczanie) == 0) // sprawdz czy dana liczna jest liczba pierwsza
        {
            //cout << odliczanie << " to liczba pierwsza " << endl;
            licznik += 1; // jesli tak to zwieksz licznik
        }
    }
    return odliczanie;
}

int main()
{
    int a;
    cout << "Podaj liczbę: ";
    cin >> a;

    cout << "Wyniki to: " << pierwsza(a) << endl;
}