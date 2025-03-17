#include <iostream>
using namespace std;

int czyjeden(int n)
{
    int ile = 0;
    if (n == 1)
    {
        cout << "Podana przez uzytkownika liczba wynosi jeden" << endl;
        return 1;
    }

    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << endl;
            ile++;
        }
        else
        {
            n = 3 * n + 1;
            cout << n << endl;
            ile++;
        }
    }

    return n;
}
int main()
{
    int n;
    cin >> n;

    cout << "Podaj liczbe: " << endl;
    cout << czyjeden(n);

    return 0;
}   