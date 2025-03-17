
#include <iostream>
using namespace std;

int Fibox(int a, int z)
{
    int i = 2;
    int f1 = 1, f2 = 1;
    int f3 = 0;
    while (i <= z)
    {
        
        if (i >= a && i <= z)
        {
            cout << endl;
            cout << f2 << endl;
            i++;
        }
        else
        {
            i++;
        }
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return 0;
}

int main()
{
    int a;
    cout << "Podaj a: " << endl;
    cin >> a;

    int z;
    cout << "Podaj z: " << endl;
    cin >> z;

    Fibox(a, z);
}