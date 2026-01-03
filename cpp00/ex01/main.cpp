#include "PhoneBook.hpp"

int main()
{
  
  PhoneBook ContactBook; // Create an instance of PhoneBook
  std::string string_input; // Variable to hold user input commands
  try // Exception handling block
  {
    while (true)
    {
      std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        if(!(std::getline(std::cin, string_input))) // Read user input
          break;
      if (string_input == "ADD")
                  ContactBook.Add_New_Contact(); // Call method to add a new contact
      else if(string_input == "SEARCH")
          ContactBook.Search_A_Contact(); // Call method to search for a contact
      else if(string_input == "EXIT") // Check for exit command
          break;
    }
  }
  catch(const std::exception& e) // Catch any exceptions thrown during execution
  {
    std::cout << "\nProgram terminated." << std::endl; // Notify user of program termination
  }
}