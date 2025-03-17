#include <iostream>
using namespace std;

// to by tak latwo bylo zrobic ifem zamiast void (funkcje void blizniacze) a tak to mudialem sie natrudzic

bool czypierwszax1(int x1)
{
    int dzielnik = 2;

    while(dzielnik * dzielnik <= x1)
    {
        if(x1 % dzielnik == 0)
        {
            return false;
        }
        dzielnik++;
    }
    return true;
}
    
bool czypierwszax2(int x2)
{
    int dzielnik = 2;

    while(dzielnik * dzielnik <= x2)
    {
        if(x2 % dzielnik == 0)
        {
            return false;
        }
        dzielnik++;
    }
    return true;
}

int blizniacze(int x1, int x2) 
{
 

   if(x1 > 0 && x2 > 0)
   {
        while (x1 > x2) {
        if (x1 - x2 == 2) {
            cout << "liczby" << x1 << " i " << x2 << " to liczby blizniacze";
            return 0;
        }
    }
    if(x1 == x2)
    {
        cout << "liczby nie moga byc takie same";
        return 1;
    }
    else
    {
        if(x2 - x1 == 2)
        {
            cout << "liczby" << x1 << " i " << x2 << " to liczby blizniacze"; 
            return 0;
        }
    }
    cout << "liczby" << x1 << " i " << x2 << " to NIE SA liczby blizniacze";
   }
    
}
int main() 
{
    int x1;
    cout << "Podaj liczbe naturalna, dodatnia x1: ";
    cin >> x1;

    int x2;
    cout << "Podaj liczbe naturalna, dodatnia x2: ";
    cin >> x2;

    if(czypierwszax1(x1) == true && czypierwszax2(x2) == true)
    {
        blizniacze(x1, x2);
    }
    else
    {
        cout << "liczby nie sa pierwsze wiec nie moga byc blizniacze";
        return 0;
    }

}