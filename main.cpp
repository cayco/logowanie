#include <iostream>
using namespace std;  

int main()
{  string u_login, u_pass; // deklaracja zmiennej n typu int
  const string login = "login";
  const string pass = "haslo";
  int i = 3; // do sprawdzania czy uzytkownik trzy razy niepoprwanie podal haslo

  while (i > 0) // sprawdzanie ilosci prob
  {
    // wczytaj login i haslo
    cout << "Podaj login: ";
    cin >> u_login; // wczytaj zmienną n ze standardowego wejscia
    cout << "Podaj haslo: ";
    cin >> u_pass;
    // sprawdz czy login i haslo sa poprawne
    if (u_login == login && u_pass == pass)
    {
      cout << "Zalogowano\n\n"; //\n - znak nowej linii
      return 0;
    }
    else
    {
      cout << "Niepoprawny login lub hasło\n";
      i--;
    }
  }

  cout << "Zbyt duzo prob\n";
  return -1;
}
