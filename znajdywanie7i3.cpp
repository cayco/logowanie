using namespace std;
#include <iostream>

int main()
{
    int x;     // liczba podana przez urzytkownika
    int n = 0; // ilosc 3
    int z = 0; // ilosc 7

    cout << "Podaj liczbe: ";
    cin >> n;

    while (x > 0)
    {
        if (n%10 == 3)
        {
            n++;
        }
        if (z % 10 == 7)
        {
            z++;
        }
        n = n / 10;
    }
    cout << "w podanej liczbie znajduja sie " << n << "3" << endl;
    cout << "w podanej liczbie znajduja sie " << z << "7" << endl;
    return 0;
}