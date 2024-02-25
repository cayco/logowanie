#include <iostream>
using namespace std;

int main()
{

    int a
    ;
    cout << "Prosze podac liczbe: " << endl;
    cin >> a;
    int dzielnik = 2;

    while (dzielnik <= a / 2)
    {

        if (a % dzielnik == 0)
        {
            cout << "dzielnnik: " << dzielnik << endl;
            cout << "a: " << a << endl;
            cout << "Podana liczba jest liczba zlozona" << endl;

            return 0;
        }
        dzielnik++;
    }
    cout << "Podana liczba jest liczba pierwsza" << endl;
    return 0;
}
