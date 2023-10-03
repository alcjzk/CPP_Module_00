#include <iostream>
#include "Contact.hpp"

int main(void)
{
    try
    {
        Contact contact;
    }
    catch (int error)
    {
        std::cout << "Error" << std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
