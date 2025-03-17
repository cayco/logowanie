#include <iostream>
using namespace std;

bool czypierwsza(int n)
{
    int dzielnik = 2;

    while (dzielnik * dzielnik <= n)
    {
        if (n % dzielnik == 0)
        {
            return false;
        }
        dzielnik++;
    }
    return true;
}

bool blizniacze(int x1, int x2)
{
    if (czypierwsza(x1) == true && czypierwsza(x2) == true)
    {
        if (x1 - x2 == 2 || x2 - x1 == 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int x1;
    cout << "Podaj liczbe naturalna, dodatnia x1: ";
    cin >> x1;

    int x2;
    cout << "Podaj liczbe naturalna, dodatnia x2: ";
    cin >> x2;

    if (x1 > 2 && x2 > 2)
    {
        if (blizniacze(x1, x2) == true)
        {
            cout << "liczby blizniacze" << endl;
        }
        else
        {
            cout << "liczby nie sa blizniacze" << endl;
        }
    }
    else
    {
        cout << "nie ma liczb blizniaczych ponizej 3";
        return 0;
    }
}