#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
string imie,nazwisko,klasa;
int numer;
string klasan,przedmiot;

 class osoba
 {
    public:

 
       void wprowadzo( )
       {
              cout << "wprowadz imie : ";
              cin>>imie;
              cout << "wprowadz nazwisko : ";
              cin>>nazwisko;
       }
 
 
 };
 
 class uczen : public osoba
 {
    public:
      uczen()
      { }
 
      void wprowadzu()
      {
     		 wprowadzo( );
              cout << "wprowadz numer: " ;
              cin>>numer;
              cout << "wprowadz klasa: " ;
              cin>>klasa;
      }
 
      void wypiszu)(
      {
              cout << imie << " " << nazwisko << " " << klasa << " " << numer <<endl;
      }
 };
  class nauczyciel : public osoba
 {
    public:
      nauczyciel()
      { }
 
      void wprowadzn()
      {
		wprowadzo( );
              cout << "wprowadz klase: " ;
              cin>>klasan;
              cout << "wprowadz przedmiot: " ;
              cin>>przedmiot;
      }
 
      void wypiszn()
      {
              cout << imie << " " << nazwisko << " " << klasan << " " <<przedmiot;
      }
 };



int main(int argc, char** argv) {
	    uczen u;
	    nauczyciel n;
    u.wprowadzu();
    u.wypiszu();
    n.wprowadzn();
    n.wypiszn();
    return 0;
	return 0;
}
