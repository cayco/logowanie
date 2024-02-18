#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Podaj liczbe: ";
    cin >> n;

    if (n>10 && n%2 == 0)
    {
        cout << "Liczba (" << n << ") jest ";
        cout << "parzysta i wieksza od 10\n";
    }
    else
    {
        cout << "Liczba (" << n << ") jest ";
        cout << "nieparzysta i/lub mniejsza niz 10\n";
    }

    return 0;
}