using namespace std;
#include <iostream>
int main()
{
    int a;
    cout << "Podaj a: " ;
    cin >> a;
    int b;
    cout << "Podaj b: " ;
    cin >> b;
    
    while ( a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    cout << "NWD a i b to: " << a ;
    return 0;
}