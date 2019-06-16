#ifndef gra_hpp
#define gra_hpp

#include <iostream>
#include "Gracz.hpp"
#include "plansza.hpp"
#include <string>

class gra
{
    Plansza & plansza;
    Plansza & plansza2;
    Gracz & gracz1;
    Gracz & gracz2;
    
    

    
public:
    
    gra(Plansza &p, Plansza &p2, Gracz &g1, Gracz &g2);
    std::string graj();

};

#endif /* gra_hpp */
