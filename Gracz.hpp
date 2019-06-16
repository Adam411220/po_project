

#ifndef Gracz_hpp
#define Gracz_hpp

#include <iostream>
#include <string>
class Plansza;

class Gracz
{
    std::string imie;
    Plansza &plansza;
    Plansza &plansza2;





public:
Gracz(const std::string  & im, Plansza &p, Plansza &p2);
    std::string podajImie() const;
    void graczustaw();
    void graczustaw2();
    void graczustaw3();

    void atak();
    void a2();

};

#endif /* Gracz_hpp */
