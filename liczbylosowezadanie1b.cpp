#include <iostream>
#include <ctime>

using namespace std;


void wpisz_losowe(int wielkosc)
{

    float tab[wielkosc];
    float min = 1.5;

    float max = 2.25;


    srand(time(NULL));

    for (int i = 0; i < wielkosc; ++i)
    {
        tab[i] = min + (rand() / (RAND_MAX * 1.0)) * (max - min);
        cout << tab[i] << endl;
    }
}

int main()
{
    int wielkosc;
    cout << "Ile liczb mam wygenerowac: ";
    cin >> wielkosc;
    float min;

    wpisz_losowe(wielkosc);

    return 0;
}