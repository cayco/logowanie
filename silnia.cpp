#include <iostream>
using namespace std;

bool silnia(int n)
{
    int wynik = 1;
    for(int i = 1; i <= n; i++)
        wynik *= i;
    return wynik;
}

int main()
{
    cout << silnia(6) << endl;

    return 0;
}