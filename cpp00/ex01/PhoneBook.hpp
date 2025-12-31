#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <sstream>


class PhoneBook
{
    private:
        Contact contacts[8];
        int current_index;
        int total_index;
    public:
    PhoneBook();
    void Add_New_Contact();
    void Search_A_Contact();
    void Desplay_by_Index();
};







#endif