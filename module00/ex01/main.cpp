#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

void newContact(PhoneBook *phonebook)
{
    std::string  firstName;
    std::string  lastName;
    std::string  nickname;
    std::string  phoneNumber;
    std::string  darkestSecret;

    std::cout << "first name: ";
    getline(std::cin, firstName);
    std::cout << "last name: ";
    getline(std::cin, lastName);
    std::cout << "nickname: ";
    getline(std::cin, nickname);
    std::cout << "phone number: ";
    getline(std::cin, phoneNumber);
    std::cout << "darkest secret: ";
    getline(std::cin, darkestSecret);
    if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty())
        return ;
    else
    {
        std::cout << phonebook->len;
        phonebook->list[phonebook->len] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
        if (phonebook->len < 7)
            phonebook->len++;
    }
}

int main(void)
{

    std::string input;
    PhoneBook phonebook;

    getline(std::cin, input);
    while (input != "exit")
    {
        if (input == "add")
        {
            newContact(&phonebook);
        }
        else if (input == "search")
        {
            phonebook.searchContact();
        }
        getline(std::cin, input);
    }
    return (0);
}
