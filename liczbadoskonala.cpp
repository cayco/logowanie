#include <iostream>
using namespace std;

bool Suma(int n) 
{
    int suma = 0; 
    int i = 2;    

   
    while (i < n) 
    {
        if (n % i == 0) 
        {
            suma += i;
        }
        i++;
    }

    if(suma == n)
    {
        return true;
    }
    else
    {
        return false;
    }

    
}
int main() 
{
    int n;
    cout << "Podaj liczbe naturalna, dodatnia: ";
    cin >> n;

    if (Suma(n) == true) 
    {
        cout << "Liczba doskonała" << endl;
    } else {
        cout << "Liczba nie jest doskonała" << endl;
    }

    return 0;
}