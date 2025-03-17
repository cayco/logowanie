#include<iostream>
using namespace std;

string PosortowanyWyraz(string wyraz){ //ALA
char literki[26] = {0};
for(int i = 0; i < wyraz.size(); i++)
    literki[wyraz[i] - 65]++;

string wynik;
for(int i = 0; i < 26; i++)
    while(literki[i] > 0)
    {
        wynik += char(65 + i);
        literki[i]--;
    }
return wynik;
}

int main()
{
    string wyraz0, wyraz1;
    cin>>wyraz0>>wyraz1;

    if(PosortowanyWyraz(wyraz0) == PosortowanyWyraz(wyraz1))
        cout<<wyraz0<<" i "<<wyraz1<<" sa anagramami"<<endl;
    else
        cout<<wyraz0<<" i "<<wyraz1<<" nie sa anagramami"<<endl;

}