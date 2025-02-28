#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook()
{
    len = 0;
    // list[0] = Contact();
}

// void PhoneBook::addContact()
// {
//     std::string  firstName;
//     std::string  lastName;
//     std::string  nickname;
//     std::string  phoneNumber;
//     std::string  darkestSecret;
//
//     std::cout << "first name: ";
//     getline(std::cin, firstName);
//     std::cout << "last name: ";
//     getline(std::cin, lastName);
//     std::cout << "nickname: ";
//     getline(std::cin, nickname);
//     std::cout << "phone number: ";
//     getline(std::cin, phoneNumber);
//     std::cout << "darkest secret: ";
//     getline(std::cin, darkestSecret);
//     if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty())
//         return ;
//     else
//         return;
// }
//
