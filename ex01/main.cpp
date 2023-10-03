#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   book;
    std::string input;

    try
    {
        while (true)
        {
            std::cout << "Enter command (ADD | SEARCH | EXIT): ";
            std::cin >> input; // FIXME: Infinite loop on ctrl+d
            if (input.compare("ADD") == 0)
            {
                Contact contact;
                contact.fill_prompt();
                book.add_contact(contact);
            }
            else if (input.compare("SEARCH") == 0)
            {
                book.display();
            }
            else if (input.compare("EXIT") == 0)
            {
                return (EXIT_SUCCESS);
            }
        }
    }
    catch (int error)
    {
        std::cout << "Error" << std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
