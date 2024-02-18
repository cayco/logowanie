using namespace std;
#include <iostream>

// Algortym
//1. wypisz wszystkie liczby mniejsze niz n
//2. jeśli liczba jest nieparzta to
//3. sprawdz czy dzieli sie przez 7, jesli tak to
//4. zwieksz licznik


int main()
{
    int n; // gorna granica
    int x = 1; // iterator do gornej granicy n
    int licznik = 0; // ilosc liczb spełniających warunki

    cout << "Podaj n: ";
    cin >> n;  

    while (x <= n)
    {

        if (x % 2 != 0) // mam nieparzysta
        {

            if (x % 7 == 0) // mam podzielna przez 7
            {
                //cout << "x = " << x << endl;
                //cout << "licznik = " << licznik << endl;
                licznik+=1; // jesli tak to zwieksz licznik (p.4)
            }
        }
 
        x+=1;
    }
    cout << licznik << endl;
    return 0;
}