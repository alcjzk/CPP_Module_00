#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <stdlib.h>
# include "Contact.hpp"

# define PHONEBOOK_MAX_CONTACTS 8

class PhoneBook {
    public:
        PhoneBook();

        void    add_contact(const Contact &contact);
        void    display() const;

    private:
        Contact             contacts[PHONEBOOK_MAX_CONTACTS];
        int                 next_free_idx;

        void                display_contact(int index) const;
        static std::string  format_cell(const std::string &str);
};

#endif
