#include <iostream>
using namespace std;

int suma1( int a, int b);
int suma2( int a, int b, int c);
int suma3( int a, int b, int c, int  d);

int main()
{
    cout << "2 + 3= " << suma1(2, 3) << endl;
    cout << "2 + 3 + 4= " << suma2(3, 3, 4) << endl;
    cout << "2 + 3 + 4 + 5= " << suma3(2, 3, 4, 5) << endl;
}
