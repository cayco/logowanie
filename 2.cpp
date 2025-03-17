#include <iostream>
using namespace std;

float Fibox(int liczba)
{
    float f1 = 1, f2 = 1;
    float f3 = 0;
    int i = 2;
    if (liczba <= 2)
        return 1;
    while (i < liczba)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        i++;
    }
    cout << f2 << endl;
    cout << f3 << endl;
    float zloty = f2 / f1;
    return zloty;
}

/*int Fibo(int liczba)
{
    float f1 = 1, f2 = 1, f3 = 0;
    for(int i = 0; i < liczba; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;

        
    }
    cout << f3 / f2 << endl;
    return 0;
}*/


int main()
{
    int liczba;
    cin >> liczba;
    cout << Fibox(liczba);
    return 0;
}