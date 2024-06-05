#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int tab[10];
void wypelnij();
int main()
{
    cout<<tab[3]<<endl;
    wypelnij();
    cout<<tab[3];
    return 0;
}
void wypelnij(){
    for(int i = 0; i < 10; i++){
        srand(time(NULL));
        tab[i] = rand() % 10 + 1;
    }
}
