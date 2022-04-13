#ifndef FileHandling_h
#define FileHandling_h

#include <iostream>

class klasa 
{
    public:
    std::string Klasa ; 
    virtual void klasa_postaci() = 0 ;
    virtual void Zdolnosc_specjalna() = 0 ; 
};       

class  Mag : public  klasa
{
    public:    
    void klasa_postaci();    
    void Zdolnosc_specjalna() ;  
    Mag();                 
};

class  Kaplan : public klasa
{
    public:      
    void klasa_postaci() ;  
    void Zdolnosc_specjalna() ;       
    Kaplan() ;              
};
class rasa 
{
     public:  
     std::string Rasa ; 
     virtual void Return_race() = 0 ; 
};   

class  Czlowiek : public rasa 
{
    void rasa() ;        
    void Return_race();   
};

class  Elf : public rasa 
{
    void rasa() ;              
    void Return_race() ;   
};

class postac
{     
    public: 
    postac() ;    
    klasa * wsk;
    rasa* co;  
    void TwojaKlasa() ;       
    void TwojaRasa() ;       
};


#endif
