

#include <iostream>
#include "plansza.hpp"
#include "Gracz.hpp"
#include "gra.hpp"
using namespace std;


int main()
{
    Plansza p(10,10);
    Plansza p2(10,10);
    
    Gracz g1("Jan",p,p2);
    Gracz g2("Krzysztof",p2,p);
    
    
    gra gra1(p,p2,g1,g2);
    string wygrany=gra1.graj();
    cout<<endl;
    cout<<"Wygrał  "<<wygrany<<endl;

}





