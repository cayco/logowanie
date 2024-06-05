
#include <iostream>
using namespace std;

int main()
{
    // zakladamy ze patrzymy ile sie da kupic krzesel najdrozszych
    // i wymieniamy najdrozsze krzesla na tansze az do
    // momentu kiedy bedzioemy miec 100 krzesel

    int ip = 15000;          // ilosc pieniedzy
    int cx = 165;            // cena droszych
    int cy = 115;            // cena tanszych
    int lx = ip / cx;        // liczba drozszych
    int pk = ip - (lx * cx); // pozostala kwota = ip - (lx * cx )
    int ly = pk / cy;        // liczba tanszych = pk / cy

    while (lx + ly < 100)
    {
        // jesli tak to trzeba zmniejszych lx zeby zamienic na tansze
        // jesli nie to koniec
        lx = lx - 1;         // zmiejsz ilosc drozszych
        pk = ip - (lx * cx); // przelicz nowa kwote na tansze krzesla
        ly = pk / cy;        // policz ile teraz mozesz kupic tanszych krzesel
    }

    cout << "Moze kupic maksymalnie " << lx << " krzesel drozszych" << endl;

    return 0;
}