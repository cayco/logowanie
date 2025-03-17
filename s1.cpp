#include <iostream>
using namespace std;

// 3 najmniejsze i najwieksze wartosci w tab[10], z losowo wygenerowanymi wartosciami 

int main()
{

    double tab[10] = {0};
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        double r =  (double)rand();
        tab[i] = -10 + r / RAND_MAX * 20;

        cout << tab[i] << endl;
    }

    double naj1 = -10;
    double naj2 = -10;
    double naj3 = -10;

    cout << endl;
    for(int j = 0; j < 10; j++) // 3 najwieksze
    {
        if(tab[j] > naj1)
        {
            naj3 = naj2;
            naj2 = naj1;
            naj1 = tab[j];

        }
        if(tab[j] > naj2 && tab[j] < naj1 )
        {
            naj3 = naj2;
            naj2 = tab[j];

        }
        if(tab[j] > naj3 && tab[j] < naj2 && tab[j] < naj1)
        {
            naj3 = tab[j];

        }
    }
    cout << "3 najwieksze: " << naj1 << " " << naj2 << " " << naj3 << endl;

    double najm1 = 10;
    double najm2 = 10;
    double najm3 = 10;
    
    for(int j = 0; j < 10; j++) // 3 najmniejsze
    {
        if(tab[j] < najm1) // 1
        {
            najm3= najm2;
            najm2 = najm1;
            najm1 = tab[j];

        }
        if(tab[j] < najm2 && najm1 < tab[j] && naj2 < naj1) // 2
        {
            najm3 = najm2;
            najm2 = tab[j];

        }
        if(tab[j] < najm3 &&  najm2 < tab[j] && najm1 < tab[j] && naj2 < naj3 && naj1 < naj3) // 3
        {
            najm3 = tab[j];

        }
    }
    cout << "3 najmniejsze: " << najm1 << " " << najm2 << " " << najm3 << endl;

    return 0;
}
