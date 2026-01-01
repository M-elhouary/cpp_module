#include "PhoneBook.hpp"

<<<<<<< HEAD




// class
// object
// instance
// member attributes
// member function
// this
// initialization list
// namespaces
// std
// 

=======
/*
  Main function: Entry point of the PhoneBook application.
  Runs a loop that accepts commands (ADD, SEARCH, EXIT) from the user.
  - ADD: Adds a new contact.
  - SEARCH: Lists contacts and allows viewing details.
  - EXIT: Terminates the program.
*/
>>>>>>> origin/main
int main()
{
  // 
  PhoneBook ContactBook;
  std::string string_input;
  try
  {
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
  }
  catch(const std::exception& e)
  {
    std::cout << "\nProgram terminated." << std::endl;
  }
  return (0);
}