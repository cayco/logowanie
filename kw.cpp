#include <iostream>

using namespace std;

int main()
{

    int a;
    int kwadraty = 0;
    cout << "Prosze podac wyskosc figury: " << endl;
    cin >> a;
    int b;
    cout << "Prosze podac dlugosc figury: " << endl;
    cin >> b;
    //zachowujemy poczatkowe a i b
    int pa = a;
    int pb = b;

    if (a == b)
    {
        cout << "Ta figura to kwadrat";
        return 0;
    } else if 
    (a == 0 || b == 0)
    {
        cout << "Bok nie moze miec dlugosc 0";
        return 0;
    }

    while (a != b)
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
    // w a jest NWD
    kwadraty = pa / a * pb / a;

    cout << "W tej figurze znajduja sie maksymalnie " << kwadraty << " identyczne kwadraty, ktore nie nachodza na siebie" << endl;
    return 0;
}
