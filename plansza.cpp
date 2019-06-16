

#include "plansza.hpp"
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
Plansza::Plansza(int  wys, int  szer)
{
    wysokosc=wys;
    szerokosc=szer;
    
    for (int kol = 0; kol < wysokosc; kol++) {
        
        for (int wier = 0; wier < szerokosc; wier++) {
            pole[kol][wier].jedenmaszt = false;
            pole[kol][wier].dwamaszty = false;
            pole[kol][wier].trzymaszty = false;
            
        }
        
    }
    
   /* pole[0][1].jedenmaszt=true;
    
    pole[5][5].dwamaszty=true;
    pole[5][6].dwamaszty=true;
    
    pole[7][4].trzymaszty=true;
    pole[6][4].trzymaszty=true;
    pole[8][4].trzymaszty=true;


*/


}





void Plansza::wyswietl() const

{
    cout<<endl;
   cout<<"   0    1    2    3    4    5    6    7    8    9";
    cout<<endl;
    for(int kol=0; kol<wysokosc; kol++)
    {
        cout<<kol;
        for(int wier=0; wier<szerokosc; wier++)
        {
            cout<<"[";
            if(pole[kol][wier].jedenmaszt==true)
                cout<<"s";
            else
                cout<<".";
            
            if(pole[kol][wier].dwamaszty==true)
                cout<<"s";
            else
                cout<<".";
                
                if(pole[kol][wier].trzymaszty==true)
                    cout<<"s";
                else
                    cout<<".";
            
            cout<<"]";

        }

        cout<<endl;
}
}

bool Plansza::ustawjedno(int kolumna, int wiersz)
{
    
    
   if(kolumna>wysokosc|| kolumna<0 || wiersz>szerokosc|| wiersz<0)
    return false;
    
    
    for(int i=0; i<3; i++)
        
    {
            for(int j=0; j<3; j++)
        {
       
            if(pole[abs(kolumna+(i-1))][abs(wiersz+(j-1))].jedenmaszt==true )
                    return false;

      }
    }
    
 
   
    
    pole[kolumna][wiersz].jedenmaszt=true;


    return true;
    
}


bool Plansza::ustawdwa(int kol, int wie, int wybor)
{
    if(kol>wysokosc|| kol<0 || wie>szerokosc|| wie<0)
        return false;
    
    if((pole[kol][wie].jedenmaszt)==true)
        return false;
    
    
    if(pole[kol][wie].dwamaszty==true )
        
        return false;
    
    for(int i=0; i<3; i++)
        
    {
        for(int j=0; j<3; j++)
        {
            
            if(pole[abs(kol+(i-1))][abs(wie+(j-1))].dwamaszty==true ||  pole[abs(kol+(i-1))][abs(wie+(j-1))].jedenmaszt==true)
                return false;
            
        }
    }
    

    
    
    switch (wybor)
        {
                
        case 1:
               
        {
            
            if(kol>wysokosc-2)
                return false;
            pole[kol][wie].dwamaszty=true;
            pole[kol+1][wie].dwamaszty=true;
        }   break;
            
               
        case 2:
                
            if(wie>szerokosc-2)
                return false;

        {
            pole[kol][wie].dwamaszty=true;
            pole[kol][wie+1].dwamaszty=true;
        }   break;
    }

    
    
    
    return true;
}

bool Plansza::ustawtrzy(int kol, int wie, int wybor)
{
    if(kol>wysokosc|| kol<0 || wie>szerokosc|| wie<0)
        return false;
    
    if((pole[kol][wie].jedenmaszt)==true)
        return false;
    
    
    if(pole[kol][wie].dwamaszty==true )
        
        return false;
    
    if(pole[kol][wie].trzymaszty==true )
        
        return false;
    
    
    
    for(int i=0; i<3; i++)
        
    {
        for(int j=0; j<3; j++)
        {
            
            if(pole[abs(kol+(i-1))][abs(wie+(j-1))].dwamaszty==true ||  pole[abs(kol+(i-1))][abs(wie+(j-1))].jedenmaszt==true || pole[abs(kol+(i-1))][abs(wie+(j-1))].trzymaszty==true )
                return false;
            
        }
    }
    
    
    
    switch (wybor) {
        case 1:
        {
            if(kol>wysokosc-3)
                return false;
            pole[kol][wie].trzymaszty=true;
            pole[kol+1][wie].trzymaszty=true;
            pole[kol+2][wie].trzymaszty=true;

        }   break;
            
        case 2:
        {
            if(wie>szerokosc-3)
                return false;
            pole[kol][wie].trzymaszty=true;
            pole[kol][wie+1].trzymaszty=true;
            pole[kol][wie+2].trzymaszty=true;

        }   break;
    }
    
    
    
    
    return true;
}
bool Plansza::zatop(int kolumna, int wiersz)
{


   if(kolumna>wysokosc|| kolumna<0 || wiersz>szerokosc|| wiersz<0)

       return false;
    
    
    
  if((pole[kolumna][wiersz].jedenmaszt==true)||(pole[kolumna][wiersz].dwamaszty==true)||(pole[kolumna][wiersz].trzymaszty==true))
    {
        pole[kolumna][wiersz].jedenmaszt=false;
        pole[kolumna][wiersz].dwamaszty=false;
        pole[kolumna][wiersz].trzymaszty=false;


    }

    return true;
    
  
}

bool Plansza::czytrafione(int kol, int wie)
{
    if(kol>wysokosc|| kol<0 || wie>szerokosc|| wie<0)
        
        return false;
    
    if((pole[kol][wie].jedenmaszt==true)||(pole[kol][wie].dwamaszty==true)||(pole[kol][wie].trzymaszty==true))
        return true;
    
   return false;
}
bool Plansza::czykoniec() const
{
   
    
    for(int kol=0; kol<wysokosc; kol++)
    {
        for(int wier=0; wier<szerokosc; wier++)
        {
            
            
            if(pole[kol][wier].jedenmaszt==true)
           
                return false;
            if(pole[kol][wier].dwamaszty==true)
                
                return false;
            
            if(pole[kol][wier].trzymaszty==true)
                return false;
             
        }
    }
        

    return true;
}






