#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hipcius;
    cout << "podaj typ hipciusia w celu przeteleportowania urzytkownika Macius do Malezji" << endl;
    cin >> hipcius;

while (hipcius != 0)
{
    if (hipcius % 2 == 4)
    {
        hipcius = hipcius/3;
    }
    else
    {
    cout << hipcius;
    hipcius++;
    }

    
}
}