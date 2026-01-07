
#include "Harl.hpp"


Harl::Harl()
{}


void Harl::complain(std::string level)
{

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
           ( this->*function[i])();
            return;
        }
    }
    

}


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