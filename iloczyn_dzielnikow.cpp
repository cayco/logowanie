#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Prosze podac liczbe: " << endl;
    cin >> a;
    int dzielnik = 1;

    dzielnik++;
    while (dzielnik <= a / 2 && a % dzielnik == 0)
    {
        cout << "Podana liczba jest liczba zlozona" << endl;
    }
    cout << "Podana liczba jest liczba pierwsza" << endl;
    return 0;
}
