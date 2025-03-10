#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main(void)
{

    std::string input;
    PhoneBook phonebook;

    std::cout << std::endl << "add - add new contact" << std::endl;
    std::cout << "search - display list of contacts" << std::endl;
    std::cout << "exit - end program" << std::endl << std::endl;
    getline(std::cin, input);
    while (input != "exit")
    {
        if (input == "add")
        {
            phonebook.addContact();
        }
        else if (input == "search")
        {
            phonebook.displayAllContacts();
            phonebook.searchContact();
        }
        getline(std::cin, input);
    }
    return (0);
}
