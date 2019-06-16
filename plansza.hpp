
#ifndef plansza_hpp
#define plansza_hpp

#include <iostream>
#include <string>
struct pozycja
{
    bool jedenmaszt;
    bool dwamaszty;
    bool trzymaszty;
};
class Plansza
{
    pozycja pole[100][100];
    int wysokosc;
    int szerokosc;
  
   
public:
    Plansza(int,int );
    void wyswietl() const;
    bool ustawjedno(int kolumna, int wiersz);
    bool ustawdwa(int kol, int wie, int wybor);
    bool ustawtrzy(int kol, int wie, int wybor);
    bool czytrafione(int kol, int wie);
    bool zatop(int kolumna, int wiersz);
    bool czykoniec() const;
   
};


#endif /* plansza_hpp */
