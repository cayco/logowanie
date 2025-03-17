using namespace std;
#include <iostream>

int parzystosc(int liczba)
{
    int a = liczba%10;
    while(liczba >= 1)
    {
        if(a%2 == 0)
        {
            liczba /= 10;
        }
        else
        {
            cout << "NIE";
            return 0;
        }
        
    }
    cout << "TAK";
    return liczba;
}

int main()
{
    int liczba;
    cout << "Podaj liczbe: " << endl;
    cin >> liczba;

    parzystosc(liczba);

}