#include <iostream>
#include <ctime>
using namespace std;

void wypelnij(int tablica[]) // wypisuje wartosci tablicy po kolei iterujac po indeksach
{srand(time(NULL));
    for (int i = 0; i < 10; i++)
{
    tablica[i] = 1 + rand() % 20;
}
    
}
int maks(int tablica[]){
    int Najwieksza = 0;
 
  for (int i = 0; i < 10; i++)        if (tablica[i] > Najwieksza)            Najwieksza = tablica[i];    return Najwieksza;}