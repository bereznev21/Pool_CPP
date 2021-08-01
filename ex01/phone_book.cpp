#include <iostream>
#include "string"

int find_index_most_old_contact(std::string phone_book[8][6]) {
    int i = 0;
    int min = -1;
    int min_index = -1;

    while (i < 8) {
        if (phone_book[i][0] < min + '0') {
            min = phone_book[i][0];
            min_index = i;
        }
        i++;
    }
    return min_index;
}

int find_most_new_contact(std::string phone_book[8][6]) {
    int i = 0;
    int max = -1;

    while (i < 8) {
        if (phone_book[i][0] < max) {
            max = phone_book[i][0];
        }
        i++;
    }
    return max;
}

void command_add(std::string phone_book[8][6]) {
    int i = 0;
    int index_most_old_contact;
    int index_most_new_contact;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    std::cout<<"First name"<<" | "<<"Last name"<<" | "<<"Nickname"<<" | "<<"Phone Book"<<" | "<<"Darkest secret"<<std::endl;
    std::cin>>first_name>>last_name>>nick_name>>phone_number>>darkest_secret;
    index_most_old_contact = find_most_old_contact(phone_book);
    index_most_new_contact = find_most_new_contact(phone_book);
    phone_book[index_most_old_contact][0] = index_most_new_contact + 1;
    phone_book[index_most_old_contact][1] = first_name;
    phone_book[index_most_old_contact][2] = last_name;
    phone_book[index_most_old_contact][3] = nick_name;
    phone_book[index_most_old_contact][4] = phone_number;
    phone_book[index_most_old_contact][5] = darkest_secret;
}

void command_search(std::string phone_book[8][6]) {
    cout<<phone_book[0][0];
}

int main() {
	std::string phone_book[8][6];

	while(1) {
		std::string command;

		std::cin>>command;
		if (command == "EXIT") {
		    break;
		}
        else if (command == "ADD") {
            command_add(phone_book);
		}
		else if (command == "SEARCH") {
            command_search(phone_book);
		} else
            break;
	}
}
