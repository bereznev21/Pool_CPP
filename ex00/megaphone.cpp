//
// Created by Redwyn Poetess on 7/24/21.
//
#include <iostream>
#include "string"


char    ft_toupper(char sym_in) {
    if (sym_in >= 'a' && sym_in <= 'z') {
        return sym_in - 32;
    }
    return sym_in;
}

int     main(int argc, char** argv) {
    int n;

    n = 1;
    if (argc == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    while (n < argc) {
        int i = 0;
        while (argv[n][i] != '\0') {
            std::cout<<ft_toupper(argv[n][i]);
            i++;
        }
        n++;
    }
    std::cout<<"\n";
}
