#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {

    private:
        std::string  firstName;
        std::string  lastName;
        std::string  nickname;
        std::string  phoneNumber;
        std::string  darkestSecret;

    public:

        Contact();

        Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);

        void displayContactDetails();
        void displayContactName();

        // ~Contact();
};

#endif
