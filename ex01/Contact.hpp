#ifndef CONTACT_H
# define CONTACT_H

# include <string>

# define CONTACT_INCOMPLETE 1

class Contact {
    public:
        Contact();
    
        void                fill_prompt();
        void                display() const;
        bool                is_valid() const;
        const std::string   &first_name() const;
        const std::string   &last_name() const;
        const std::string   &nickname() const;

    private:
        std::string         _first_name;
        std::string         _last_name;
        std::string         _nickname;
        std::string         _phone_number;
        std::string         _darkest_secret;
};

#endif
