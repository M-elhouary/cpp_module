

#include "Harl.hpp"


Harl::Harl()
{}



void  Harl::debug(){
    std::cout << "debuge" << std::endl;
}

void Harl::error()
{
    std::cout << "error" << std::endl;

}


void Harl::info(){
    std::cout << "info" << std::endl;

}

void Harl::warning(){
    std::cout << "warning" << std::endl;

}




void Harl::complain(std::string level)
{
    int index = 0;
    void (Harl::*function[]) (void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };

    std::string ar_level[] = {"DEBUG", "INFO", "wARNING", "ERROR"};

    for (size_t i = 0; i < 4; i++)
    {
        if(ar_level[i] == level){
           index = i;
           break;
           
    }
}
    
    switch (index)
    {
    case 0:
        ( this->*function[0])();
        ( this->*function[1])();
        ( this->*function[2])();
        ( this->*function[3])();
        break;
    case 1:
        ( this->*function[1])();    
        ( this->*function[2])();
        ( this->*function[3])();    
        break;
    case 2:
        ( this->*function[2])();    
        ( this->*function[3])();
        break;
    case 3:
        ( this->*function[3])();
    
    default:
        break;
    }

}

