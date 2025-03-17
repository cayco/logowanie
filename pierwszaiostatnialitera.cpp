#include <iostream>
using namespace std;
void warunek(string n) // zmienna i informuje program ile razy zostal zwiekszony a
{

    // if (n.front() == n.back())
    // {
    //     cout << "TAK";
    // }
    // else
    //     cout << "NIE";

    if (n[0] == n[n.length()-1])
    {
        cout << "TAK";
    }
    else
        cout << "NIE";

}
int main()
{
    string n;
    cout << "podaj wyraz: " << endl;
    cin >> n;
    warunek(n);
}
 