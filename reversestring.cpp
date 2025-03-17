/*#include <iostream>
#include <ctime>
using namespace std;
// program robi ze zwyklego wyrazu nieparzysty palindrom
string palindrom(string wyraz)
{
    string wyrazn;
    string wyrazr;

    int j = wyraz.size() - 1;
    for(int i = 0; i < wyraz.size(); i++)
    {
        wyrazr += wyraz[j];
        j--;
    }
    srand(time(NULL));
    wyrazn = wyraz + char(97 + rand() % 26) + wyrazr;
    return wyrazn;
    
}
int main()
{
    string wyraz;
    cin >> wyraz;

    cout << palindrom(wyraz);
    return 0;
}   
*/

#include <iostream>
#include <ctime>
using namespace std;
// program robi ze zwyklego wyrazu nieparzysty palindrom
string palindrom(string wyraz)
{
   string wyrazn;
   string wyrazr;
   int j = wyraz.size() - 1;
   for(int i = 0; i < wyraz.size(); i++)
   {
       wyrazr += wyraz[j];
       j--;
   }
   srand(time(NULL));
   wyrazn = wyraz + char(97 + rand() % 26) + wyrazr;
   return wyrazn;
}
int main()
{
   string wyraz;
   cin >> wyraz;
   cout<<palindrom(wyraz);
   return 0;
}
//Maciek 6
//0 5