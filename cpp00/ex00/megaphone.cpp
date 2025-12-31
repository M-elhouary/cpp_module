//============subject=============================
// convert each arg from lowercase to uppercase  =
//================================================

/*
** This program takes command-line arguments and prints them in uppercase.
** If no arguments are provided, it prints a specific noise message.
** It demonstrates basic string manipulation and standard output usage.
*/

//================== wath shoulde know ================
/*
         Namespaces
         Stdio streams
         Class and instance
         Member attributes and member function
         This
         Initialization list
         Const
         Visibility
         Class vs struct
         Accessors
         Comparisons
         Non member attributes and non member functions
         Pointers to members
*/
//================================================


#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    (void) ac;
    if( av[1] == NULL)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<  std::endl;
    int i, j;
    i = 1;
    while (av[i])
    {
        j = 0;
        while(av[i][j])
            std::cout << (char) toupper(av[i][j++]);
        i++;
    }
    std::cout << std::endl;
    return (0);
}