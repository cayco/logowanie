#include <iostream>
#include <string>

using namespace std;

int znajdzznak(string wyraz, char znak)
{
    int licznik = 0;
    while (licznik < wyraz.size())
    {
        if (znak == wyraz[licznik])
        {
            return 0;
        }
        licznik++;
    }
    return 1;
}
int powt(string n, string m)
{

    int licznik = 0;
    if (n.size() > m.size())
    {
        while (licznik < n.size())
        {
            if (znajdzznak(m, n[licznik] == 0))
            {
                cout << "NIE" << endl;
                return 1;
            }
            licznik++;
        }
    }
    else
    {
        while (licznik < m.size())
        {
            if (znajdzznak(n, m[licznik]))
            {
                cout << "NIE" << endl;
                return 1;
            }
            licznik++;
        }
    }
    cout << "TAK";
    return 0;
}
int main()
{
    string n, m;
    cin >> m;
    cin >> n;
    powt(n, m);
}
