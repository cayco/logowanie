#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    for(int i = 0; i < 26; i++)
    {
        cout << char(97 + rand() % 26) << " "; // rzutowanie - potraktuj to co w nawiasie jako char
    }

    return 0;
}   