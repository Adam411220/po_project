

#include "Gracz.hpp"
#include <iostream>
#include "plansza.hpp"
#include <string>

using namespace std;

Gracz::Gracz(const std::string & im, Plansza &p,Plansza &p2)
:imie(im), plansza(p), plansza2(p2)
{
    
}

std::string Gracz::podajImie() const
{
    return imie;
}

void Gracz::graczustaw()
{
    int x = 0,y = 0;
    for(int i=0; i<3; i++)
    {
    do{
       
        cout<<endl;
        plansza.wyswietl();
        cout<<imie<<" Ustaw Jednomasztowca Podaj wspolrzedna x  ";
        cin>>x;
        cout<<"Podaj wspolrzedna y ";
        cin>>y;
       
        

      


        
    }while (plansza.ustawjedno(x, y)==false);
    }
}
        


void Gracz::graczustaw2()
{
    int x = 0,y = 0;
    int wybor;
    for(int i=0; i<2; i++)
    {
        
        
        do{
            
            cout<<endl;

            plansza.wyswietl();
            cout<<" Ustaw dwumasztowca Pionowo [1] Poziomo [2]";
            cin>>wybor;
            cout<<imie<<" Podaj wspolrzedna x  ";
            cin>>x;
            cout<<"Podaj wspolrzedna y ";
            cin>>y;
            


            
        }while (plansza.ustawdwa(x, y, wybor)==false);
    }
}



void Gracz::graczustaw3()
{
    int x = 0,y = 0;
    int wybor;
    for(int i=0; i<1; i++)
    {
        
        
        do{
            
            cout<<endl;

            plansza.wyswietl();
            cout<<" Ustaw trzymasztowca Pionowo [1] Poziomo [2]";
            cin>>wybor;
            cout<<imie<<" Podaj wspolrzedna x  ";
            cin>>x;
            cout<<"Podaj wspolrzedna y ";
            cin>>y;
            

            
        }while (plansza.ustawtrzy(x, y, wybor)==false);
    }
}

        
       
    
    





void Gracz::atak()
{
    
    int x, y;
    
    while(1){
        plansza.wyswietl();
    cout<<imie<<" Podaj wspolrzedna x do ataku staku";
    cin>>x;
    cout<<"Podaj wspolrzedna y do ataku statku";
    cin>>y;
        if(plansza2.czytrafione(x, y)==true)
        {
            plansza2.zatop(x, y);
            cout<<endl;

            cout<<"                  *Trafiony*        ";
            if(plansza2.czykoniec()==true)
                break;
        }
        else{
            cout<<endl;

            cout<<"                  *Pudło*           ";
            break;
        }
        
       
    }



}



void Gracz::a2()
{
    
    int x, y;
    while (1) {
        plansza2.wyswietl();
        cout<<imie<<" Podaj wspolrzedna x do ataku staku";
        cin>>x;
        cout<<"Podaj wspolrzedna y do ataku statku";
        cin>>y;
        
        
        if(plansza.czytrafione(x, y)==true)
        {
            plansza.zatop(x, y);
            cout<<endl;
            cout<<"                   *Trafiony*         ";

            if(plansza.czykoniec()==true)
                break;
        }
        else
        {
            cout<<endl;

            cout<<"                   *Pudło*          ";
             break;
        }
        
        
    }
    


    }
    
    
    
    


