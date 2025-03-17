#include <iostream>
#include <ctime>

using namespace std;


void wpisz_losowe(int wielkosc,int typ )
{

    float tab[wielkosc];
    float min;
    cout << "Minimalna wartosc liczby losowej: ";
    cin >> min;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // pozwolilem sobie skopiowac ta komende z internetu poniewaz z nieznanego mi powodu bez niej zmienna max generowala sie losowo a nie byla pobierana od uzytkownika

    float max;
    cout << "Maksymalna wartosc liczby losowej: ";
    cin >> max;

    srand(time(NULL));

    for (int i = 0; i < wielkosc; ++i)
    {
        //float losowa = min + static_cast<float>(rand()) / RAND_MAX * (max - min);
        tab[i] = min + (rand() / (RAND_MAX * 1.0)) * (max - min);
        if (typ == 1) //float
            tab[i] = round(tab[i]); // robi z floata inta
        cout << tab[i] << endl;
    }
}

int main()
{
    int wielkosc;
    cout << "Ile liczb mam wygenerowac: ";
    cin >> wielkosc;
    float min;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // pozwolilem sobie skopiowac ta komende z internetu poniewaz z nieznanego mi powodu bez niej zmienna max generowala sie losowo a nie byla pobierana od uzytkownika
    
    int typ;
    cout << "Wpisz 1 dla typu int i 0 dla float: " << endl;
    cin >> typ;

    wpisz_losowe(wielkosc,typ);

    return 0;
}
