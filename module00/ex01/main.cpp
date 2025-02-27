#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

// using namespace std ;
void eraseCtt(Contact *ctt)
{
    ctt->firstName.clear();
    ctt->lastName.clear();
    ctt->nickname.clear();
    ctt->phoneNumber.clear();
    ctt->darkestSecret.clear();
}

void getContactInfo(Contact *newctt)
{
    std::cout << "first name: ";
    getline(std::cin, newctt->firstName);
    std::cout << "last name: ";
    getline(std::cin, newctt->lastName);
    std::cout << "nickname: ";
    getline(std::cin, newctt->nickname);
    std::cout << "phone number: ";
    getline(std::cin, newctt->phoneNumber);
    std::cout << "darkest secret: ";
    getline(std::cin, newctt->darkestSecret);
    if (newctt->firstName.empty() || newctt->lastName.empty() || newctt->nickname.empty() || newctt->phoneNumber.empty() || newctt->darkestSecret.empty())
        eraseCtt(newctt);
        // std::cout<< "is empty";
}

int main(void)
{
    std::string input;
    Contact newctt;

    getline(std::cin, input);
    while (input != "exit")
    {
        if (input == "add")
        {
            getContactInfo(&newctt);
            // cout << "first name: ";
            // getline(cin, newctt.firstName);
        }
        getline(std::cin, input);
    }
    return (0);
}
