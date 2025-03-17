#include <iostream>
using namespace std;

bool czypierwsza(int a)
{
    int dzielnik = 2;

    while (dzielnik <= a/2 && a > 2)
    {
        if (a % dzielnik == 0)
        {
            return true;
        }
        dzielnik++;
    }
    return false;
}

int main()
{
    int x1;
    cout << "podaj x1:" << endl;
    cin >> x1;

    int x2;
    cout << "podaj x2:" << endl;
    cin >> x2;
    cout << endl;

    int a = x1;

    while (a <= x2)
    {
        if (czypierwsza(a) == true)
        {
            cout << a << endl;
        }
        a++;
    }
    return 0;
}