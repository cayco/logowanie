#include <iostream>
using namespace std;

//Program wyswietla liczby bilizniacze z zakresu <a,z>

bool czypierwsza(int x)
{
    int dzielnik = 2;

    while(dzielnik * dzielnik <= x)
    {
        if(x % dzielnik == 0)
        {
            return false;
        }
        dzielnik++;
    }
    return true;
}

int main()
{
   int a, z;
   cin>>a>>z;
   for(a; a <= z - 2; a++){
    if(czypierwsza(a) == true)
        if(czypierwsza(a + 2) == true)
            cout<<a<<" "<<a + 2<<endl;
   }

}