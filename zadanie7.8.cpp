#include <iostream>
#include <string> 
using namespace std;


void stop( void);

int main()
{
cout << "Funkcja stop() zatrzyma konsole na ekranie...";
stop();
}
void stop( void)
{
char c; 
cin >> c;
}