using namespace std;
#include <iostream>

int main()
{
    int liczby[6];
    int licznik = 0;
    while (licznik < 6)
    {
        cout << "Podaj liczbe: ";
        cin >> liczby[licznik];
        if (cin.fail())
        {
            cout << "Nie wprowadzono liczby typu int" << endl;
            return -1; // wyjscie z programu z kodem -1
        }
        cout << endl;
        licznik++;
    }
    licznik = 0;

    while (licznik < 6)
    {

        if (liczby[licznik] == 7)
        {
            cout << "numer indeksu: " << licznik << endl;
            return 0;
        }

        licznik++;
    }
    cout << "Brak" << endl;
    return 0;
}