#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contact.hpp"

class PhoneBook {

    public:
        Contact *phonebook[8];
        int len;
        
        void add(Contact newctt, Contact *phonebook);
        void search(Contact newctt, Contact *phonebook);
};

#endif
