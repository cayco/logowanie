#include <iostream>
using namespace std;



int main()
{
    int tab[20] = {0};

    srand(time(NULL));
    for(int i = 0; i < 20; i++)
    {
        tab[i] = 1 + rand() % 10;
        cout << tab[i] << endl;
    }

    cout << endl;
     for(int j = 0; j < 20; j++)
    {
        if(tab[j] == 7)
        {
            cout << j << endl;
        }
    }
    return 0;
}