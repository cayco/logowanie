#include <iostream>
using namespace std;

int bin2dec(string liczba, int podstawa)
{
    int w = 0;
    for (int i = 0; i < liczba.size(); i++)
    {
        w = w * podstawa + liczba[i] - 48; 
    }
    return w;
}

int main()
{
    string liczba;
    cout << "liczba" << endl;
    cin >> liczba;
    int podstawa;

    cout << "podstawa" << endl;
    cin >> podstawa;
    cout << bin2dec(liczba, podstawa) << endl;
    return 0;
}