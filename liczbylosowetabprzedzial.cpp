#include <iostream>
#include <ctime>

using namespace std;

void wpisz_losowe(int wielkosc)
{

    float tab[wielkosc];

    float wartmin;
    cout << "minimalna wartosc liczby losowej: ";
    cin >> wartmin;

    float wartmax;
    cout << "Maksymalna wartosc liczby losowej: ";
    cin >> wartmax;

    srand(time(NULL));

    for (int i = 0; i < wielkosc; ++i)
    {
        tab[i] = wartmin + (rand() / (RAND_MAX * 1.0)) * (wartmax - wartmin);
        cout << tab[i] << endl;
    }
}

int main()
{
    int wielkosc;
    cout << "Ile liczb mam wygenerowac: ";
    cin >> wielkosc;

    wpisz_losowe(wielkosc);

    return 0;
}
