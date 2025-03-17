#include <iostream>
using namespace std;

int Horner(string liczba, int podstawa)
{
    int w = 0;
    for(int i = 0; i < liczba.size(); i++)
    {
        w = w * podstawa + liczba[i] - 48;
    }
    return w;
}
int main()
{
    string liczba;
    cin >> liczba;
    int podstawa;
    cin >> podstawa;
    cout << Horner(liczba, podstawa);
    return 0;
}