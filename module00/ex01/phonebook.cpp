#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook()
{
    len = 0;
    // list[0] = Contact();
}

void PhoneBook::searchContact() {
    int count = 0;

    if (len == 0)
    {
        std::cout << "No contacts registered" << std::endl;
        return;
    }
    while (count <= len) {
        std::cout << count + 1 << "|";
        list[count].displayContact();
        std::cout << std::endl;
        count++;
    }
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
