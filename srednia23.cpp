#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int tab[10];
void wypelnij();
float srednia();

int main()
{
    wypelnij();
    cout<< endl << endl << srednia(); 
    return 0;
}

float srednia()
{
    int a;
    for(int i = 0; i < 10; i++)
    {
        a += tab[i];
        //cout << a << endl;
    }

    return a/10;
}
void wypelnij()
{
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 10 + 1;
    }
}

