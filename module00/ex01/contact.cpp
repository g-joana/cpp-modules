#include "contact.hpp"
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

void Contact::displayContact()
{
    std::cout << firstName << "|" << lastName << "|" << nickname << "|";
}
