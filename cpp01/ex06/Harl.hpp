#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

/*
** Harl class for ex06:
** Similar to ex05, but implements a 'filter' mechanism.
** It displays messages at the given level AND all levels above it (more severe).
*/
class Harl{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Harl();
        void complain( std::string level);
};

#endif