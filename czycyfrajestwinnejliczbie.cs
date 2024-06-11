#include <iostream>
#include <string>

using namespace std;
bool znajdzlitere(string wyraz, char znak)
{
    int licznik = 0;
    int znalezione = 0;

    while (licznik < wyraz.size())
    {
        if (wyraz[licznik] == znak)
            znalezione++;
    }

    if (znalezione == 2)
        return true;
    else
        return false;
}

int powt(string m,string n)
{
    int licznik =0;
    //dla kazdej cyfry z wiekszej liczby sprawdz czy wystepuje w mniejszej liczbie
    if (n.size() > m.size())
    {
        //n
        while ( licznik < n.size())
        {
            if (znajdzlitere(m,m[licznik]) == true)

        }

    }
    else
    {
        m
    }
 return 0;
}

int main()
{
    string n,m;
    cin >> m;
    cin m >>m
    powt(n,m);
}
