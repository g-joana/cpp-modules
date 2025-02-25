#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

using namespace std ;

void getContactInfo(Contact *newctt)
{
    cout << "first name: ";
    getline(cin, newctt->firstName);
    cout << "last name: ";
    getline(cin, newctt->lastName);
    cout << "nickname: ";
    getline(cin, newctt->nickname);
    cout << "phone number: ";
    getline(cin, newctt->phoneNumber);
    cout << "darkest secret: ";
    getline(cin, newctt->darkestSecret);
    if (newctt->firstName.empty() || newctt->lastName.empty() || newctt->nickname.empty() || newctt->phoneNumber.empty() || newctt->darkestSecret.empty())
        cout<< "is empty";
        // eraseCtt(newctt);
}

int main(void)
{
    string input;
    Contact newctt;

    getline(cin, input);
    while (input != "exit")
    {
        if (input == "add")
        {
            getContactInfo(&newctt);
            // cout << "first name: ";
            // getline(cin, newctt.firstName);
        }
    }
    return (0);
}
