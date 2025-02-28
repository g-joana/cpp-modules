#include "contact.hpp"
// #include <iostream>
#include <string>

Contact::Contact()
{
    firstName = "unknown";
    lastName = "unknown";
    nickname = "unkonown";
    phoneNumber = "unknown";
    darkestSecret = "unknown";
}

Contact::Contact(std::string fName, std::string lName, std::string nick, std::string number, std::string secret)
{
    firstName = fName;
    lastName = lName;
    nickname = nick;
    phoneNumber = number;
    darkestSecret = secret;
}
