using namespace std;
#include <iostream>

int ilecyfr(int b)
{
    // ilosc cyfr
    int wynik = 1;
    while (b >= 0)
    {
        cout << "what";
        b = b % 10;
        wynik = wynik + 1;
    }
    return wynik;
}

int main()
{
    int a;
    float f;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;
    cout << "dsfsd";
    int pozycja = 0;
    // a = a / ilecyfr(a);
    cout << "Przed petla";







    cout << "liczba 6 znajdfuje sie na " << ilecyfr(a) - pozycja << " pozycji";
    return 0;
    cout << "Podaj liczbe: " << endl;
    int n;
    cin >> n;
    int x = 0;
    if (n == 0)
    {
        cout << "Liczba ta zawiera 1 litere" << endl;
    }
    else
    {
        while (n % 10 >= 1)
        {

            n = n / 10;
            x++;
        }
        cout << "Liczba ta zawiera: " << x << " liter" << endl;
    }
    return 0;
}


