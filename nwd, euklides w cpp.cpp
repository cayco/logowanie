#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
 
    cout << " podaj a" << endl;
cin >> a;
    cout << "podaj b" << endl;
cin >> b;

while (a%b != 0)
{
    b = a%b; 
    a = b;
}

cout << "Twoj wynik to:" << endl;
cout << b;
return 0;

}
