#include <iostream>
#include "rules.h"
#include "utilities.h"

// table declaration
std::string table[3][3] = {
    {"|1|", "|2|", "|3|"},
    {"|4|", "|5|", "|6|"},
    {"|7|", "|8|", "|9|"}
};

void turn(bool whichPlayer)
{
    using std::cout;
    using std::endl;

    std::string playerSpray = "";
    short option;

    system("clear");
    checkWinner(table);

    cout << "Turn " << turnCount + 1 << endl; 
    if (whichPlayer == true)
    {
        cout << "\n\t\t\x1B[33mPlayer Two turn\033[0m" << endl;
        playerSpray = "\x1B[33mX\033[0m";
    }
    else if (whichPlayer == false)
    {
        cout << "\n\t\t\x1B[32mPlayer One turn\033[0m" << endl;
        playerSpray = "\x1B[32mO\033[0m";
    }

    do
    {
        tablePrint(table);
        cout << endl << "Enter an option " << "(" << playerSpray << "): ";
        std::cin >> option;

        // Check if the option introduced isn't overwriting a previous player selection.
        if (tableUpdate(playerSpray, option, table) == true)
        {
            turnCount++;
        }

    } while (option > 9 || option < 0);

}