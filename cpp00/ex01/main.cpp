#include "PhoneBook.hpp"

int main()
{
  PhoneBook ContactBook;
  std::string string_input;
  while (true)
  {
    std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
      if(!(std::getline(std::cin, string_input)))
        break;
    if (string_input == "ADD")
                ContactBook.Add_New_Contact();
    else if(string_input == "SEARCH")
        ContactBook.Search_A_Contact();
    else if(string_input == "EXIT")
        break;
  }
  return (0);
}