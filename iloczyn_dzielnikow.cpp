#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Prosze podac a: " << endl;
    cin >> a;
    if 
    int dzielnik = 1, dzielnikliczby;
    int iloczyndzielnikow = 1;
    while (dzielnik <= a / 2)
    {
        dzielnik++;

        if (a % dzielnik == 0)
        {
            dzielnikliczby = dzielnik;
            iloczyndzielnikow = dzielnik * iloczyndzielnikow;
            cout << "dzielnik liczby to: " << dzielnikliczby << endl;
        }
    }

    if (a!=0) 
        cout << "Iloczyn dzielnikow wlasciwych liczby 'a' wynosi: " << iloczyndzielnikow << endl;
    else
        cout << "Zero nie ma dzielnikow" ;
    return 0;
}
