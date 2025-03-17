#include <iostream> 
using namespace std;

bool Fibox(int N)
{
    int i = 2;
    int f1 = 1, f2 = 1;
    int f3 = 0;
    while (i <= N)
    {
        if(f3%2!=0)
        {    
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        else
        {
            return true;
        }
        i++;
    }
    return false;
}


int main()
{
    int N = 0;
    cout << "Podaj liczbe:" << endl;
    cin >> N;

    for(int i = 0; i <= N; i++)
    {
        if(Fibox(N) == true)
        {
            cout << Fibox(N);
        }
    }
    
    return 0;
}