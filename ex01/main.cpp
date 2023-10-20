#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   book;
    std::string input;

    std::cin.exceptions(std::ios_base::badbit | std::ios_base::eofbit);
    try
    {
        while (true)
        {
            std::cout << "Enter command (ADD | SEARCH | EXIT): ";
            std::getline(std::cin, input);
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
    catch (std::exception const &_e)
    {
        std::cout << std::endl;
        return (EXIT_SUCCESS);
    }
    return (EXIT_SUCCESS);
}
