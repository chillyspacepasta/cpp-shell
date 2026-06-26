#include <iostream>
#include <limits>
#include <string>

int main()
    {
    std::string input;

    while (1)
        {
        std::cout << "cc_shell> ";

        if (!std::getline(std::cin, input))
            {
            std::cout << "\ninput stream requested to be closed, exiting...";
            return 1;
            }

        else if (input == "exit")
            {
            std::cout << "exiting...";
            break;
            }

        std::cout << "[Echo]: " << input << std::endl;
        }

    return 0;

    }