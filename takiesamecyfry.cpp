#include <iostream>
using namespace std;

int cyfra(int liczba)
{

    int cyfra = liczba % 10;

    int poprzedniacyfra = cyfra; // zmienna pomocnicza ktora zapisuje poprzedniacyfra liczbe
    while (cyfra == poprzedniacyfra && liczba >=10)
    {
        liczba /= 10;
        poprzedniacyfra = cyfra;
        cyfra = liczba % 10;
    }

    if (cyfra == poprzedniacyfra)
    {
        cout << "TAK";

    }
    else
    {
        cout << "nie";
    }
    return 0;
}

int main()
{
    int liczba;
    cin >> liczba;
    cyfra(liczba);
}
