#include <iostream>
#include "Contact.hpp"

Contact::Contact() {}

void Contact::fill_prompt()
{
    std::cout << "\nPlease fill contact info below\n";

    std::cout << "First name: ";
    std::getline(std::cin, this->_first_name);

    std::cout << "Last name: ";
    std::getline(std::cin, this->_last_name);

    std::cout << "Nickname: ";
    std::getline(std::cin, this->_nickname);

    std::cout << "Phone number: ";
    std::getline(std::cin, this->_phone_number);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, this->_darkest_secret);
    std::cout << std::endl;
}

void Contact::display() const
{
    std::cout << '\n';
    std::cout << "First name: "     << this->_first_name     << '\n';
    std::cout << "Last name: "      << this->_last_name      << '\n';
    std::cout << "Nickname: "       << this->_nickname       << '\n';
    std::cout << "Phone number: "   << this->_phone_number   << '\n';
    std::cout << "Darkest secret: " << this->_darkest_secret << '\n';
    std::cout << '\n';
}

bool Contact::is_valid() const
{
    if (this->_first_name.empty())
        return (false);
    if (this->_last_name.empty())
        return (false);
    if (this->_nickname.empty())
        return (false);
    if (this->_phone_number.empty())
        return (false);
    if (this->_darkest_secret.empty())
        return (false);
    return (true);
}

const std::string   &Contact::first_name() const
{
    return (this->_first_name);
}
const std::string   &Contact::last_name() const
{
    return (this->_last_name);
}
const std::string   &Contact::nickname() const
{
    return (this->_nickname);
}
