#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>



typedef enum s_flag {FIRSTN, LASTEN, PHONE, SECRET, NICKN} t_flag;


class Contact {
    private:
        std::string firstName;
        std::string lasteName;
        std::string phoneNumber;
        std::string darkestSecret;
        std::string nickName;
    public:
        void SetValue(t_flag flag, std::string value);
        void  DesplayValue(int flag);
};

#endif



