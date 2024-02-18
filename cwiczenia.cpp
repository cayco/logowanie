using namespace std;
#include <iostream>

int NWD(int a, int b)
{
    int reszta;
    while (b != 0)
    {

        reszta = a % b;
        a = b;
        b = reszta;
    }
    if (b == 0)
    {
        return a;
    }
}

int wynik (int l1, int l2, int l3)
{
    cout << endl<< "Wartosc NWW z liczb "<< l1 << " i " << l2 << ": " << l3 << endl;
}

int main()
{
    int a;
    cout << "Podaj a: ";
    cin >> a;
    int b;
    cout << "Podaj b: ";
    cin >> b;

    wynik(a, b, a * b / NWD(a, b) );
    return 0;
}
