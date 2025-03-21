#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact()
{
    this->firstName = "";
    this->lastName = "";
    this->nickname = "";
    this->phoneNumber = "";
    this->darkestSecret = "";
}

Contact::Contact(std::string fName, std::string lName, std::string nick, std::string number, std::string secret)
{
    this->firstName = fName;
    this->lastName = lName;
    this->nickname = nick;
    this->phoneNumber = number;
    this->darkestSecret = secret;
}

void Contact::displayContactPreview()
{
    std::cout << firstName.substr(0, 9);
    if(firstName.length() >= 10)
        std::cout << ".";
    else
        for (int i=firstName.length() ; i < 10; i++)
            std::cout << " ";
    std::cout << "|";
    std::cout << lastName.substr(0, 9);
    if(lastName.length() >= 10)
        std::cout << ".";
    else
        for (int i=lastName.length() ; i < 10; i++)
            std::cout << " ";
    std::cout << "|";
    std::cout << nickname.substr(0, 9);
    if(nickname.length() >= 10)
        std::cout << ".";
    else
        for (int i=nickname.length() ; i < 10; i++)
            std::cout << " ";
}

void Contact::displayContactDetails()
{
    std::cout << "first name: " << this->firstName << std::endl;
    std::cout << "last name: " << this->lastName << std::endl;
    std::cout << "nickname: " << this->nickname << std::endl;
    std::cout << "phone number: " << this->phoneNumber << std::endl;
    std::cout << "darkest secret: " << this->darkestSecret << std::endl;
}
