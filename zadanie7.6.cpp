#include <iostream>
#include <string> 
using namespace std:
bool czy _dziewczyna( string imie);
int main()
{
string txt;
cout << "Jak masz na imie? "; 
cin >> txt;
if (czy_dziewczyna( txt))
{
cout << "Jestes dziewczyna!";
}
else
{
cout << "Jestes chlopakiem?";
}
}
char c;
cin >> c;
bool czy_dziewczyna( string imie)
{
char ostatni_znak = imie[ imie. size() - 1];
if (ostatni_znak = 'a')
    return true;
    // dziewczyna
else

    return false;
}
    // chlopak