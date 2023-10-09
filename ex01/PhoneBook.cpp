#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

#define COLUMN_WIDTH 10

PhoneBook::PhoneBook()
{
    next_free_idx = 0;
}

void PhoneBook::add_contact(const Contact &contact)
{
    if (!contact.is_valid())
    {
        std::cout << "\nCannot save incomplete contact\n" << std::endl;
        return ;
    }
    this->contacts[this->next_free_idx] = contact;
    this->next_free_idx = (this->next_free_idx + 1) % PHONEBOOK_MAX_CONTACTS;
}

void PhoneBook::display_contact(int index) const
{
    if (index >= PHONEBOOK_MAX_CONTACTS || index < 0)
    {
        std::cout << 
            "\nContact index '" << index << "' out of bounds\n" << std::endl;
        return ;
    }
    if (!this->contacts[index].is_valid())
    {
        std::cout <<
            "\nNo saved contact at index '" << index << "'\n" << std::endl;
        return ;
    }
    this->contacts[index].display();
}

void PhoneBook::display() const
{
    int contact_idx;

    std::cout << "\n|";
    std::cout << std::setw(11) << "Index|";
    std::cout << std::setw(11) << "First name|";
    std::cout << std::setw(11) << "Last name|";
    std::cout << std::setw(11) << "Nickname|";
    std::cout << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < PHONEBOOK_MAX_CONTACTS; i++)
    {
        if (!this->contacts[i].is_valid())
            continue ;
        std::cout << std::setw(1) << '|';
        std::cout << std::setw(COLUMN_WIDTH) << i;
        std::cout << std::setw(1) << '|';
        std::cout << std::setw(COLUMN_WIDTH) << PhoneBook::truncate(this->contacts[i].first_name());
        std::cout << std::setw(1) << '|';
        std::cout << std::setw(COLUMN_WIDTH) << PhoneBook::truncate(this->contacts[i].last_name());
        std::cout << std::setw(1) << '|';
        std::cout << std::setw(COLUMN_WIDTH) << PhoneBook::truncate(this->contacts[i].nickname());
        std::cout << std::setw(1) << '|';
        std::cout << std::endl;
    }
    std::cout << "\nEnter index to display: ";
    std::cin >> contact_idx;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    this->display_contact(contact_idx);
}

std::string PhoneBook::truncate(const std::string &str)
{
    std::string output;

    output = str.substr(0, COLUMN_WIDTH);
    if (str.length() > COLUMN_WIDTH)
        output.back() = '.';
    return (output);
}
