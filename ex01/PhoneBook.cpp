#include <iostream>
#include "PhoneBook.hpp"

#define COLUMN_WIDTH 10

PhoneBook::PhoneBook() { }

void PhoneBook::add_contact(const Contact &contact)
{
    if (!contact.is_valid())
    {
        std::cout << "Cannot save incomplete contact" << std::endl;
        return ;
    }
    this->contacts[this->next_free_idx] = contact;
    this->next_free_idx = (this->next_free_idx + 1) % PHONEBOOK_MAX_CONTACTS;
}

void PhoneBook::display_contact(int index) const
{
    if (index > PHONEBOOK_MAX_CONTACTS)
    {
        std::cout << 
            "Contact index '" << index << "' out of bounds" << std::endl;
        return ;
    }
    if (!this->contacts[index].is_valid())
    {
        std::cout <<
            "No saved contact at index '" << index << "'" << std::endl;
        return ;
    }
    this->contacts[index].display();
}

void PhoneBook::display() const
{
    for (int i = 0; i < PHONEBOOK_MAX_CONTACTS; i++)
    {
        if (!this->contacts[i].is_valid())
            continue ;
        std::cout << '|' << 
            PhoneBook::format_cell(std::to_string(i)) << '|' <<
            PhoneBook::format_cell(this->contacts[i].first_name()) << '|' <<
            PhoneBook::format_cell(this->contacts[i].last_name()) << '|' <<
            PhoneBook::format_cell(this->contacts[i].nickname()) << '|' <<
            std::endl;
    }
}

std::string  PhoneBook::format_cell(const std::string &str)
{
    size_t  input_length;
    int     padding_length;

    input_length = str.length();
    padding_length = (int)COLUMN_WIDTH - input_length;
    if (padding_length < 0)
        padding_length = 0;
    std::string output(10, ' ');
    output.insert(padding_length, str, 0, COLUMN_WIDTH - padding_length);    
    output.resize(10);
    if (input_length > COLUMN_WIDTH)
        output.back() = '.';
    return (output);
}
