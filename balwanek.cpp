using namespace std;
#include <iostream>
int main()
{
    int x;
    cout << "Podaj ilosc litrow sniegu w parku: ";
    cin >> x;
    int k;
    cout << "Podaj ilosc litrow sniegu w jednej kuli: ";
    cin >> k;

    //jesli Kasia zrobila najmniejsza kulke na poczatku
    //to wtedy balwan bedzie najwiekszy
    if (x >= 7 * k)
    {
        //k+2k+4k

        cout << 7 * k * 1000 << endl;
        return 0;
    }//jesli Kasia zrobila srednia kulke
    else if (x >= 3.5 * k)
    {
        //0.5k+k+2k

        cout << 3.5 * k * 1000 << endl;
        return 0;
    } //jesli Kasia zrobila najwieksza kulke
    else if (x >= 1.75 * k)
    {
        //0.25k+0.5k+k
        cout << 1.75 * k * 1000 << endl;
        return 0;
    }
    else
    {
        cout << "W parku jest za malo sniegu";
    }
    return 1;
}