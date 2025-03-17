#include <iostream>
using namespace std;

// Program wyswietla liczby n - ta liczbe bilizniacza z zakresu

bool czypierwsza(int x)
{
    int dzielnik = 2;

    while (dzielnik * dzielnik <= x)
    {
        if (x % dzielnik == 0)
        {
            return false;
        }
        dzielnik++;
    }
    return true;
}
int main()
{
    int ktora;
    cout << "Która liczba bliźniacza: ";
    cin >> ktora;

    int a = 3, d = 0;
    while (d < ktora)
    {
        if (czypierwsza(a) && czypierwsza(a + 2))
        {

            if (d == ktora)
            {
                cout << "n-ta liczba bliźniacza: " << a << endl;
                break;
            }
            else if (d == ktora + 1)
                d += 2; // znalezlismy juz 2 liczby blizniaczeniacza: " << a + 2 << endl;
            break;
        }
        d += 2; // znalezlismy juz 2 liczby blizniacze: a i a+2
    }
    a += 2; // Sprawdzamy tylko liczby nieparzyste

if (d < ktora)
{
    cout << "Nie znaleziono wystarczającej liczby par liczb bliźniaczych." << endl;
}
return 0;
}
