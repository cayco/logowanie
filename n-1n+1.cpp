using namespace std;
#include <iostream>

int ntaliczba (int n)
{
    int x = 0; // x to jest zmienna pomocnicza regulujaca dzialanie petli while
    int liczby = 0;


    if (n >= 0)
    {
        while (x <= n)
        {

            liczby++;
            if (liczby % 2 != 0)
            {
                
                liczby++;
                x++;
            }
            if (x == n)
            {
                return liczby; 
            }
        }
        
    }
    else
    {

        return 0;
    }
}

int main()
{
    int n; // n = wymagana ilosc cyfr nieparzystych
    cout << "Podaj ilosc cyfr nieparzystych: " << endl;
    cin >> n;
    cout << ntaliczba(n-1) + ntaliczba(n+1);
}