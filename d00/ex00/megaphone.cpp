#include <iostream>
#include "string"
#include <cctype>

int     main(int argc, char** argv) {
    int n;

    n = 1;
    if (argc == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    else {
        while (n < argc) {
            int i = 0;
            while (argv[n][i] != '\0') {
                std::cout<<(char)std::toupper(argv[n][i]);
                i++;
            }
            n++;
        }
        std::cout<<std::endl;
    }
    return 0;
}
