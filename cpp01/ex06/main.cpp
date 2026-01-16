#include "Harl.hpp"

/*
** Tests the Harl filter.
** Expects one argument: the minimum log level to display.
*/
int main(int ac, char **av)
{
    Harl myHarl;
    
    if (ac != 2)
    {
        std::cerr << "Usage: ./harlFilter <log_level>" << std::endl;
        return 1;
    }
    myHarl.complain(av[1]);
    return 0;
}