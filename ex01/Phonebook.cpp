//
// Created by Redwyn Poetess on 8/4/21.
//

#include "string.h"
#include <iostream>
#include <iomanip>
//#include "Phonebook.h"

class Phonebook {
public:
    int index_last_contact;
    int count_contacts;
    std::string phone_book[8][5];
    Phonebook() {
        index_last_contact = 0;
        count_contacts = 0;
    }
    void command_add(void ) {
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;

        std::cout<<"First name"<<" | "<<"Last name"<<" | "<<"Nickname"<<" | "<<"Phone Book"<<" | "<<"Darkest secret"<<std::endl;
        std::cin>>first_name>>last_name>>nick_name>>phone_number>>darkest_secret;
        phone_book[index_last_contact][0] = first_name;
        phone_book[index_last_contact][1] = last_name;
        phone_book[index_last_contact][2] = nick_name;
        phone_book[index_last_contact][3] = phone_number;
        phone_book[index_last_contact][4] = darkest_secret;
        index_last_contact++;
        index_last_contact %= 8;
        count_contacts++;
        count_contacts = (count_contacts >=8 ) ? 8 : count_contacts;
    }
    void command_search(void ) {
        int i = 0;
        int index_show_contact;

        while (i < count_contacts) {
            std::cout<<std::setfill('.')<<std::setw(10);
            std::cout<<i;
            std::cout<<"|";
            std::cout<<std::setfill('.')<<std::setw(10);
            std::cout<<phone_book[i][0];
            std::cout<<"|";
            std::cout<<std::setfill('.')<<std::setw(10);
            std::cout<<phone_book[i][1];
            std::cout<<"|";
            std::cout<<std::setfill('.')<<std::setw(10);
            std::cout<<phone_book[i][2];
            std::cout<<std::endl;
            i++;
        }
        if (i != 0) {
            std::cout<<"Write index contact for get more information"<<std::endl;
            std::cin>>index_show_contact;
            std::cout<<std::setfill('.')<<std::setw(10);
            std::cout<<i;
            std::cout<<std::endl;
            std::cout<<std::setfill('.')<<std::setw(10);
            std::cout<<phone_book[index_show_contact][0];
            std::cout<<std::endl;
            std::cout<<std::setfill('.')<<std::setw(10);
            std::cout<<phone_book[index_show_contact][1];
            std::cout<<std::endl;
            std::cout<<std::setfill('.')<<std::setw(10);
            std::cout<<phone_book[index_show_contact][2];
            std::cout<<std::endl;
        }
    }

private:
};

int main() {
    Phonebook phone_book;
    std::string command;

    while (1) {
        std::cout<<"Write command"<<std::endl;
        std::cin>>command;
        if (command == "EXIT")
            break;
        else if (command == "ADD") {
            phone_book.command_add();
        }
        else if (command == "SEARCH") {
            phone_book.command_search();
        } else
            break;
    }
}
