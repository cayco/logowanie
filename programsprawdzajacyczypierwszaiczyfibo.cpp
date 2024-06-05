//intfibo(int liczba) zwraca liczba - ty element ciagu fibonacciego

#include <iostream>
using namespace std;

bool Fibonacci(int liczba) {
    if (liczba == 0 || liczba == 1) return true;
    int a = 0, b = 1,  temp =0;
    while (b < liczba) // najwieksza liczba fib. mniejsza niz 'liczba'
    {
        temp = a + b;
        a = b;
        b = temp; // w ostatnim kroku liczy pierwsza liczbe fionacciego wieksza lub rowna od liczba
    }
    return b == liczba;
}

bool pierwsza(int number)
{
    if(number < 2)
        return false;
    int dzielnik = 2;
    while(dzielnik * dzielnik <= number)
    {
        if(number % dzielnik == 0)
            return false;

        dzielnik++;
    }
return true;
}

int main()
{
    cout << "Liczby z zakresu <2,100> będące liczbami pierwszymi i liczbami Fibonacciego równocześnie" << endl;

    for (int dzielnik = 2; dzielnik <= 100; dzielnik++) 
    {
        if (pierwsza(dzielnik) && Fibonacci(dzielnik)) {
            cout << dzielnik << " ";
        }
    }
    return 0;
}
