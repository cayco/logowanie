using namespace std;
#include <iostream>

void Parzyste(int liczba[])
{
    int licznik =0;
    while (licznik < 10)
    {
        if (liczba[licznik] % 2 == 0)
        {
            cout << liczba[licznik];
        }
        licznik++;
    }
}
int main()
{

    cout << "Podaj dlugosc tablicy: " << endl;
    int licznik[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };;
    Parzyste(licznik);
}