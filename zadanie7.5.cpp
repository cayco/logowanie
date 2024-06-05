#include <iostream> 
using namespace std;
double srednia( double a, double b);
//---
int main()
{
double q, w;
cout << "Podaj dwie liczby: "; 
cin >> q >> w;
cout << "Srednia arytmetyczna = "<< srednia(q, w) << endl<< endl;
cout << "Podaj dwie inne liczby: "; 
cin >> q >> w;
cout << "Srednia arytmetyczna = " << srednia( q, w);
char c;
cin >> c;
}
//----
double srednia( double a, double b)
{
return (a + b) / 2;
}
