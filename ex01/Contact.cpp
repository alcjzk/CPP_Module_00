#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
    std::cout << "Please fill contact info below\n";

    std::cout << "First name: ";
    std::cin >> this->first_name;
    if (this->first_name.empty())
        throw CONTACT_INCOMPLETE;

    std::cout << "Last name: ";
    std::cin >> this->last_name;
    if (this->last_name.empty())
        throw CONTACT_INCOMPLETE;

    std::cout << "Nickname: ";
    std::cin >> this->nickname;
    if (this->nickname.empty())
        throw CONTACT_INCOMPLETE;

    std::cout << "Phone number: ";
    std::cin >> this->phone_number;
    if (this->phone_number.empty())
        throw CONTACT_INCOMPLETE;

    std::cout << "Darkest secret: ";
    std::cin >> this->darkest_secret;
    if (this->darkest_secret.empty())
        throw CONTACT_INCOMPLETE;
}

void Contact::display()
{
    std::cout << "First name: "     << this->first_name     << '\n';
    std::cout << "Last name: "      << this->last_name      << '\n';
    std::cout << "Nickname: "       << this->nickname       << '\n';
    std::cout << "Phone number: "   << this->phone_number   << '\n';
    std::cout << "Darkest secret: " << this->darkest_secret << '\n';
}
