#include <iostream>
using namespace std;

int Suma(int n) // zmienna i informuje program ile razy zostal zwiekszony a
{
    int a = 0;
    int i;
 
    while (i <= n) // a = zmienna okreslajaca 
    {
        a = a + i;
        i++;
    }
    return a;
}

int main()
{
    int n;
    cout << "podaj liczbe naturalna, dodatnia: " << endl;
    cin >> n;
    cout << "suma liczb od 1 do n wynosi: " << Suma(n) << endl;
}