#include <iostream>
using namespace std;

void dzielniki(int a)
{
    int dzielnik = 1;
    int i;
    int tab[i];
    while (dzielnik * dzielnik <= a)
    {
        if (a % dzielnik == 0)
        {
            cout << dzielnik << endl;
            cout << a / dzielnik << endl;
            cout << endl;
        }
        dzielnik++;
    }
    

}

int main()
{

    int a; // a to liczba sprawdzana przez uzytkownika
    cout << "Prosze podac liczbe: " << endl;
    cin >> a;


    dzielniki(a);

    return 0;
}