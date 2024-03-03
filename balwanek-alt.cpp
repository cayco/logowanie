using namespace std;
#include <iostream>
int main()
{
    int x, k, i;
    int warianty[3];

    cout << "Podaj ilosc litrow sniegu w parku: ";
    cin >> x;

    cout << "Podaj ilosc litrow sniegu w jednej kuli: ";
    cin >> k;

    // jesli Kasia zrobila najmniejsza kulke na poczatku
    // to wtedy balwan bedzie najwiekszy
    warianty[0] = k + 2 * k + 4 * k;
    warianty[1] = 0.5 * k + k + 2 * k;    // jesli Kasia zrobila srednia kulke
    warianty[2] = 0.25 * k + 0.5 * k + k; // jesli Kasia zrobila najwieksza kulke

    for (i = 0; i < sizeof(warianty); i++)
    {
        // tabela warianty jest posortowana
        if (warianty[i] > x)
            continue; //aktualna wartosc jest wieksza od ilosci sniegu, idziemy dalej
        cout << warianty[i] * 1000;
        return 0;
    }
    cout << "W parku jest za malo sniegu" << endl;
    return 1;
}