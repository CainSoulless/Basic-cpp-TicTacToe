#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include "modules/one-player.h" 
#include "modules/two-players.h" 
// #include "modules/rules.h" 
// #include "modules/turn.h" 
#include "modules/utilities.h" 


int main(void)
{
    int option = banner();
    
    if (option == 1)
    {
        onePlayer();
    } 
    else if (option == 2)
    {
        twoPlayers();
    }
    
    return 0;
}

// void debug()
// {
//     std::cout << "\x1B[31mTexting\033[0m";
//     printf("\x1B[32mTexting\033[0m\t\t");
//     printf("\x1B[33mTexting\033[0m\t\t");
//     printf("\x1B[34mTexting\033[0m\t\t");
//     printf("\x1B[35mTexting\033[0m\n");
    // tablePrint(table); 
    // tableUpdate("O", 1, table);
    // tablePrint(table); 
    // tableUpdate("O", 5, table);
    // tablePrint(table); 
    // tableUpdate("O", 9, table);
    // tablePrint(table);
    // checkWinner(table);
// }
