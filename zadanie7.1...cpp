#include <iostream>
using namespace std;

int suma( int a, int b);
{
    return a + b;
}
int suma( int a, int b, int c);
{
    return a + b + c;
}
int suma( int a, int b, int c, int  d);
{
    return a + b + c + d;
}

int main()
{
    cout << "2 + 3= " << suma(2, 3) << endl;
    cout << "2 + 3 + 4= " << suma(3, 3, 4) << endl;
    cout << "2 + 3 + 4 + 5= " << suma(2, 3, 4, 5) << endl;
    char c;
    cin >> c;
    
    return 0;
}
