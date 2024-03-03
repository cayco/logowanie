#include <iostream>
using namespace std;

int main()
{
    int k; // wysokosc kazika
    int l; // ilosc uderzen aby osiagnac wymagana wysokosc
    int m; // ile centymetrow przybywa kazikowi po jednym uderzeniu
    int w; // wymagana wysokosc

    cout << "Podaj wysokosc kazika: " << endl;
    cin >> k;

    cout << "Podaj wymagana przez trenera wysokosc: " << endl;
    cin >> w;

    cout << "Podaj ile cm 'rosnie' kazik po kazdym uderzeniu: " << endl;
    cin >> m;

    if ((w - k) % m == 0)
    {
        l = (w - k) / m;
    }
    else
    {
        l = (w - k) / m + m;
    }

    cout << "Musi udezryc sie co najmniej: " << l << " razy, zeby osiagnac wymagana wysokosc" << endl;
    return 0;
}