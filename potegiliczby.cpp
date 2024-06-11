#include <iostream>
using namespace std;

int dzielniki(int liczba, int potega)
{
    int oryginalna = liczba;
    int licznik = 1;

    while (licznik < potega )
    {
       liczba = liczba * oryginalna;
      // cout << "licznik: " << licznik << endl;
      // cout << "liczba: " << liczba << endl;
       licznik ++;
    }

    return liczba;
}

int main()
{
    int liczba;
    cin >> liczba;
    int potega;
    cin >> potega;
    
    cout << dzielniki(liczba, potega);
}
