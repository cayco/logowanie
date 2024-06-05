#include <iostream>
#include <string> 
using namespace std;

string spytaj_o_imie( void); 
string spytaj_o_nazwisko( void);
//-----
int main()
{
string si, sn;
cout << "Nazywasz sie" << si << " " << sn;
char c;
cin >> c;
}
//--
string spytaj_o_imie( void)
{ 
string imie;
cout << "Jak masz na imie? ";
cin >> imie;
return imie;
}
//----
string spytaj_o_nazwisko( void);
{
string nazwisko;
cout << "Jakie masz nazwisko? ";
}