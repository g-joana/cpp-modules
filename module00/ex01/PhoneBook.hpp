#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook {

    private:
        Contact list[8];
        int len;
        
    public:
        PhoneBook();
        void addContact();
        void displayAllContacts();
        void searchContact();

        // ~PhoneBook();
};

#endif
