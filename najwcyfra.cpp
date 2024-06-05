#include <iostream>
using namespace std;
int najwcyfra;

int znajdznajwcyfra(int liczba)
{
    while (liczba > 10)
    {
        liczba = liczba / 10;
    }
    return liczba;
}
int usun_najw_cyfre(int liczba)
{
    int ilosccyfr = 0;
    while (liczba < 10)
    {
        liczba = liczba / 10;
        ilosccyfr++;
    }

    liczba = liczba - najwcyfra * 10 ^ ilosccyfr;
    return liczba;
}
int cyfra(int liczba)
{
    najwcyfra = znajdznajwcyfra(liczba);
    while (liczba > 100)
    {
        liczba = usun_najw_cyfre(liczba);
    }
    liczba = liczba % 10;
    return liczba;
}

int main()
{
    int liczba;
    cin >> liczba;
    cout << cyfra(liczba);
}