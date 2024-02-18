#include <iostream>
using namespace std;

int main()
{
    int n, x = 0, i = 0;

    cout << "Podaj liczbe: ";
    cin >> n;

    if (cin.fail() || n < 0)
    {
        cout << "Nie wprowadzono liczby typu int wiekszej od 0" << endl;

        return -1; // wyjscie z programu z kodem -1
    }

    for (i = 0; i < n; i += 1)
    {

        cout << x << endl;
        x += 2;

        
    }
    return 0;
}
