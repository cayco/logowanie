#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Podaj liczbe: ";
    cin >> n;

    if (cin.fail())
    {
        cout << "Nie wprowadzono liczby typu int" << endl;

        return -1; // wyjscie z programu z kodem -1
    }

    switch (n)
    {
    case 1:
    case 2:
        cout << "Cukierek";
        break;

    case 3: // brakj break'e powoduje prezjscie do nstepnego case'a
    case 4:
        cout << "Czekoladka";
        break;
    case 5:;
        cout << "Zelek";
        break;
    case 6:
        cout << "Batonik";
        break;
    default:
        cout << "nie ma takiego slodycza";
        break;

        return 0;
    }
}