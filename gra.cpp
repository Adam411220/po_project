
#include "gra.hpp"
#include "plansza.hpp"
#include <string>


gra::gra(Plansza &p,Plansza &p2, Gracz &g1, Gracz &g2) :plansza(p),plansza2(p2), gracz1(g1),gracz2(g2)
{

}

std::string gra::graj()
{
    gracz1.graczustaw();
    gracz1.graczustaw2();
    gracz1.graczustaw3();
    gracz2.graczustaw();
    gracz2.graczustaw2();
    gracz2.graczustaw3();
    
 while(1)
 {
     gracz1.atak();
     if(plansza2.czykoniec())
         return gracz1.podajImie();
     
     gracz2.atak();
     if(plansza.czykoniec())
         return gracz2.podajImie();
 }
};




