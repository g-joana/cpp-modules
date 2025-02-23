#ifndef CONTACT_H
# define CONTACT_H

#include <string>
using namespace std;

class Contact {

    public:
        string  firstName;
        string  lastName;
        string  nickname;
        int     phoneNumber;
        string  darkestSecret;

        Contact newContact(string firstName, string lastName, string nickname, int phoneNumber, string darkestSecret);
};

#endif
