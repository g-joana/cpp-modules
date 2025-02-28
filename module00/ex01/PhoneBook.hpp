#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contact.hpp"

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
