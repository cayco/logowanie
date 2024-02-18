#include <iostream>

using namespace std;

int main()
{

    int a;
    cout << "Prosze podac wyskosc figury: " << endl;
    cin >> a;
    int b;
    cout << "Prosze podac dlugosc figury: " << endl;
    cin >> b;

    int NWD;
    

    while (a > 0 && b > 0 && a != b)
    {
        if (a > b)
        {
            NWD = a - b;
        }
        else
        {
            NWD = b - a;
        }
        
        cout << "W tej figurze znajduja sie maksymalnie " << NWD << " identyczne kwadraty, ktore nie nachodza na siebie" << endl;

        return 0;
    }
}
