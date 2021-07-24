//
// Created by Redwyn Poetess on 7/24/21.
//
#include <iostream>
#include "string"
using namespace std;

int main() {
    while (!cin.eof()) {
        string input;
        cin >> input;
        int i = 0;
        while (input[i]) {
            input[i] = toupper(input[i]);
            i++;
        }
        cout<<input;
        if (!cin.eof())
            cout<<" ";
        else
            cout<<"\n";
    }
}