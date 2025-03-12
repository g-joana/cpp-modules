#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact()
{
    firstName = "";
    lastName = "";
    nickname = "";
    phoneNumber = "";
    darkestSecret = "";
}

Contact::Contact(std::string fName, std::string lName, std::string nick, std::string number, std::string secret)
{
    firstName = fName;
    lastName = lName;
    nickname = nick;
    phoneNumber = number;
    darkestSecret = secret;
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
    std::cout << "first name: " << firstName << std::endl;
    std::cout << "last name: " << lastName << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "phone number: " << phoneNumber << std::endl;
    std::cout << "darkest secret: " << darkestSecret << std::endl;
}
