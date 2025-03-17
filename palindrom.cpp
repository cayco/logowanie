#include <iostream>
using namespace std;

int main()
{
    string wyraz;
    cin >> wyraz;

    int i = 0;
    int j = wyraz.size() - 1;

    bool palindrom = true;

    while (i < j)
    {
        if (wyraz[i] != wyraz[j])
        {
            palindrom = false;
            break;
        }
        i++;
        j--;
    }

    if (palindrom)
        cout << "TAK";
    else
        cout << "NIE";

    return 0;
}