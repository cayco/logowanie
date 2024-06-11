#include <iostream>
#include <string>

using namespace std;
bool znajdzlitere(string wyraz, char znak)
{
    int licznik = 0;

    while (licznik < wyraz.size())
    {
        if (wyraz[licznik] == znak)
            return true;
        licznik++;
    }
    return false;
}

int powt(string m, string n)
{
    int licznik = 0;
    int brakliczby = 0;
    // dla kazdej cyfry z wiekszej liczby sprawdz czy wystepuje w mniejszej liczbie
    if (n.size() > m.size())
    {
        // n
        while (licznik < n.size())
        {
            if (znajdzlitere(m, n[licznik]) == false)
            {
                brakliczby = 1;
                break;
            }
            licznik++;
        }
    }
    else
    {
        while (licznik < m.size())
        {
            if (znajdzlitere(n, m[licznik]) == false)
            {
                brakliczby = 1;
                break;
            }
            licznik++;
        }
    }
    if (brakliczby == 0)
        cout << "TAK";
    else
        cout << "NIE";
    return 0;
}

int main()
{
    string n, m;
    cin >> m;
    cin >> n;
    powt(n, m);
}
