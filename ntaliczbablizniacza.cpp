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

    int a = 3, d = 0;

    int ktora;
    cout << "ktora: " << endl;
    cin >> ktora;

    int blizniak = 0;
    while(d < ktora)
    {
        if (czypierwsza(a) == true)
        {
            if(czypierwsza(a + 2) == true || czypierwsza(a - 2) == true)
            {
                blizniak = a;
                d++;
            }
        }
        a++;
    }
    cout << blizniak;

    return 0;
}



