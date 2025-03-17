using namespace std;
#include <iostream>

int main()
{
    int n; // n = wymagana ilosc cyfr nieparzystych
    cout << "Podaj ilosc cyfr nieparzystych: " << endl;
    cin >> n;

    int x = 0; // x to jest zmienna pomocnicza regulujaca dzialanie petli while
    int liczby = 0;

    int suma = 0;

    if (n >= 0)
    {
        while (x <= n)
        {
            if (x == n)
            {
                cout << suma << endl;
                return 0;
            }
            liczby++;
            if (liczby % 2 != 0)
            {
                suma = suma + liczby;
                
                liczby++;
                x++;
            }
        }
        
    }
    else
    {
        
        return 0;
    }
}