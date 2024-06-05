#include <iostream> 
using namespace std; 
void twoje_dane( void);
//----------
int main()
{
twoje_dane();
cout << endl << endl; 
twoje_dane();
char c;
cin >> c;
}
//-.
void twoje_dane( void)
{
cout << "Imie i nazwisko: Maciej Kajkowski" << endl; 
cout << "Wiek: 15" << endl;
cout << "Zawod: Programista Al" << endl;
}