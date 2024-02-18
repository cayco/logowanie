using namespace std;
#include <iostream>

int main()
{
    int liczby[6];
    int licznik = 0;
    if (licznik < 6)
    {
        cout << "Podaj liczbe: ";
        cin >> liczby[licznik];
        cout << endl;
        licznik++;
    }


    licznik = 0;
    while (licznik < 6)
    {
        if (liczby[licznik]%2 == 0)
        {
            cout << liczby[licznik] << endl;
        }
        licznik++;
    }
    return 0;
}