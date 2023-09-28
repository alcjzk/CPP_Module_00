#include <iostream>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (EXIT_SUCCESS);
    }
    for (int idx_arg = 1; idx_arg < argc; idx_arg++)
    {
        for (int idx_str = 0; argv[idx_arg][idx_str]; idx_str++)
        {
            argv[idx_arg][idx_str] = toupper(argv[idx_arg][idx_str]);
        }
        std::cout << argv[idx_arg];
    }
    std::cout << std::endl;
    return (EXIT_SUCCESS);
}
