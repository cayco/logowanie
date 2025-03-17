#include <iostream>
using namespace std;



int main()
{
    int tab[11][11];

    for(int i = 1; i < 11; i++)
    {
        for(int j = 1; j < 11; j++)
        {
            tab[i][j] = i * j;
            cout << i * j << " ";
        }
        cout << endl;
    }

   for(int i = 1; i < 11; i++)
    {
        for(int j = 1; j < 11; j++)
        {
            if(i == j)
            {
                cout << tab[i][j] << endl;
            }
        }
        
    }
    return 0;
}