using namespace std;
#include <iostream>

int main()
{

    cout << "Podaj liczbe: " << endl;
    int n;
    cin >> n;
    int x = 0;
    if (n == 0)
    {
        
    cout << "Liczba ta zawiera 1 litere" << endl;

    }
    else
    {
    while (n % 10 >= 1)
    {

        n = n / 10;
        x++;
    }
    cout << "Liczba ta zawiera: " << x << " liter" << endl;
    }
        return 0;
}
