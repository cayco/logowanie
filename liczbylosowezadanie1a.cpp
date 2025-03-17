#include <iostream>
#include <ctime>

using namespace std;

void wpisz_losowe(float tab[], int wielkosc)
{
    float min = -15;
    float max = 15;


    srand(time(NULL));

    for (int i = 0; i < wielkosc; ++i)
    {
        float losowa = min + static_cast<float>(rand()) / RAND_MAX * (max - min);
        tab[i] = losowa;
        cout << tab[i] << endl;
    }
}

int main()
{
    int wielkosc;
    cout << "Wielkosc tablicy: ";
    cin >> wielkosc;

    float tab[wielkosc];

    wpisz_losowe(tab, wielkosc);

    return 0;
}
