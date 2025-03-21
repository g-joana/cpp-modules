#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

PhoneBook::PhoneBook()
{
    this->len = 0;
}

void PhoneBook::displayAllContacts() {
    int count = 0;

    std::cout << std::endl;
    if (len == 0)
    {
        std::cout << "no contacts registered" << std::endl;
        return;
    }
    std::cout << "index     " << "|" << "first name" << "|" << "last name " << "|" << "nickname  " << std::endl;
    while (count < len) {
        std::cout << count + 1 << "         " << "|";
        list[count].displayContactPreview();
        std::cout << std::endl;
        count++;
    }
}

void PhoneBook::addContact()
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
        list[len] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
        if (len < 7)
            len++;
    }
}

void PhoneBook::searchContact()
{
    std::string input;
    int index;

    if (len == 0)
        return ;
    std::cout << std::endl << "enter desired index: ";
    getline(std::cin, input);
    if (input.length() > 1)
    {
       std::cerr << "index not valid" << std::endl;
       return ;
    }
    index = std::atoi(input.c_str());
    if (index < 1 || index > 8 || index > len)
    {
        std::cerr << "index not valid" << std::endl;
        return ;
    }
    std::cout << std::endl;
    list[index - 1].displayContactDetails();
    std::cout << std::endl;
}
