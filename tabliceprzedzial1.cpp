#include <iostream>
#include <ctime>

using namespace std;

void wpisz_losowe(float tab[], int wielkosc)
{
    float min, max;
    cout << "Minimalna wartosc liczby losowej: ";
    cin >> min;

    // Oczyszczanie strumienia wejściowego, aby uniknąć zakłóceń w odczycie `max`
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Maksymalna wartosc liczby losowej: ";
    cin >> max;

    // Inicjalizacja generatora liczb pseudolosowych
    srand(time(NULL));

    // Generowanie losowych liczb zmiennoprzecinkowych z zakresu [min, max]
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

    // Tworzenie tablicy dla liczb zmiennoprzecinkowych
    float tab[wielkosc];

    // Wywołanie funkcji do wypełnienia tablicy losowymi wartościami
    wpisz_losowe(tab, wielkosc);

    return 0;
}
