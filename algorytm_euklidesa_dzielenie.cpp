using namespace std;
#include <iostream>
int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;
    int licznik;

    while (n < 30)
    {
        if (n % 2 != 0)
        {
            if (n % 7 == 0)
            {
                cout << licznik;
            }
        }
    }
    return 0;
}