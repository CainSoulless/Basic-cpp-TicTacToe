// Header guard
#ifndef UTILITIES
#define UTILITIES

#include <iostream>
// #include "headers.h"

int banner();
void frameMessage(std::string msg);

int banner()
{
    int option;
    system("clear");

    std::cout << "TicTacToe" << std::endl;

    do
    {
        std::cout << "\t1) One Player.\n\t2) Two Players\n\t3) Exit.\nPlease choose one of those options: ";
        std::cin >> option;
    } while(option > 3);

    if (option == 3) {
        frameMessage("Bye!.");
        exit(0);
    }
    return option;
}

void frameMessage(std::string msg)
{
    using std::cout;
    using std::endl;

    int len = msg.length();

    system("clear");
    cout << "|--------------------------|" << endl;

    for (int i = 0; i < len; i++) {
        cout << " ";
    }
    cout << msg;

    for (int i = 0; i < len; i++) {
        cout << "  ";
    }
    cout << endl;
    cout << "|--------------------------|" << endl;
}

short randomNumber()
{
    srand((unsigned) time(NULL));
    short number = rand() % 9;
    return number;
}

#endif