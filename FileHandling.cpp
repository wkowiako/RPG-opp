#include <iostream>
#include "FileHandling.h"

 
    void Mag::klasa_postaci()
        {
         Klasa = "Mag";
        }    
    void Mag::Zdolnosc_specjalna() 
        {
        std::cout << "Fireball " ;
        }
    Mag::Mag()
        {
        klasa_postaci() ;       
        }              


      
    void Kaplan::klasa_postaci() 
        {
         Klasa = "Kaplan";
        }
    void Kaplan::Zdolnosc_specjalna()   
        {
        std::cout << "Leczenie " ;
        }    
    Kaplan::Kaplan()
        {
         klasa_postaci() ;      
        }           

    void Czlowiek::rasa() 
        {
         Rasa = "Czlowiek";
        }    
    void Czlowiek::Return_race()
    {
     std::cout << "jestem czlowiekiem";   
    }


    void Elf::rasa()     
        {
         Rasa = "Elf";
        }   
    void Elf::Return_race()
    {
     std::cout << "jestem elfem";   
    }


    postac::postac()
    {
        int q ,a;
        std::cout << "wybierz klase "<< std::endl << " 1) Kaplan 2) Mag  " << std::endl;
        std::cin >> q ;   
        std::cout << "wybierz rase "<< std::endl << " 1) Czlowiek 2) Elf  " << std::endl;
        std::cin >> a ;   
        if(q == 1)
            {
                wsk = new Kaplan ;           
            }    
        else if(q == 2)  
            {        
                wsk = new Mag ;                   
            }  
        if(a == 1)
            {
                co = new Czlowiek ;           
            }    
        else if(a == 2)  
            {        
                co = new Elf ;                   
            }  
    } 
    klasa * wsk;
    rasa* co;
     
    void postac::TwojaKlasa()
        {
            wsk->Zdolnosc_specjalna();
        }   
          
    void postac::TwojaRasa()
        {
            co->Return_race();
        }   
   