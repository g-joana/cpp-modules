#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contact.hpp"

class PhoneBook {

    public:
        Contact list[8];
        int len;
        
        PhoneBook();
        void addContact();
        void searchContact();

        // ~PhoneBook();
};

#endif
