#include <iostream>
#include <chrono>
#include <thread>
#include "utilities.h"
#include "turn-count.h"

void tablePrint(std::string table[][3])
{
    // Print the table.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << table[i][j];
        }
        std::cout << std::endl;
    }
}

bool tableUpdate(std::string playerSpray, short option, std::string table[3][3])
{
    // DEBUG
    // short turnCount = 0;
    std::string frame = "|" + playerSpray + "|";

    std::cout << "-----------------------"  << std::endl;
    // Update the table with the player turn movement.
    for (int i = 0; i <= 3 ; i++) {
        for (int j = 0; j < 3; j++) {
            if (i * 3 + j == option) 
            {
                if (table[i][j-1] != "|O|" && table[i][j-1] != "|X|")
                {
                    table[i][j-1] = frame;
                    return true;
                } else
                {
                    std::cout << "Error\n";
                    break;
                }
            } 
        }
    }

    std::cout << std::endl << "-----------------------"  << std::endl;

    return false;
}

void checkWinner(std::string table[][3])
{ 
    using std::string;
    using namespace std::this_thread;
    using namespace std::chrono;


    // DEBUG-------------------
    short turnCount = 0;

    system("clear");

    // Check horizont lines of the table.
    if (table[0][0] == table[0][1] && table[0][1] == table[0][2] ||
        table[1][0] == table[1][1] && table[1][1] == table[1][2] ||
        table[2][0] == table[2][1] && table[2][1] == table[2][2] ||

        // Check vertical lines of the table.
        table[0][0] == table[1][0] && table[1][0] == table[2][0] ||
        table[0][1] == table[1][1] && table[1][1] == table[2][1] ||
        table[0][2] == table[1][2] && table[1][2] == table[2][2] ||

        // Check diagonal lines of the table.
        table[0][0] == table[1][1] && table[1][1] == table[2][2] ||
        table[2][0] == table[1][1] && table[1][1] == table[0][2])
    {
        frameMessage("WINNER!");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + 1s);
        exit(0);

    } else if (turnCount == 9)
    {
        frameMessage("TIE!");
        sleep_for(nanoseconds(10));
        sleep_until(system_clock::now() + 1s);
        exit(0);
    }
}

void endGame()
{
    std::cout << "End" << std::endl;
}

// void tablePrint(std::string table[][3])
// {
//     // Print the table.
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             std::cout << table[i][j];
//         }
//         std::cout << std::endl;
//     }
// }

// bool tableUpdate(std::string playerSpray, short option, std::string table[3][3])
// {
//     std::string frame = "|" + playerSpray + "|";

//     std::cout << "-----------------------"  << std::endl;
//     // Update the table with the player turn movement.
//     for (int i = 0; i <= 3 ; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (i * 3 + j == option) 
//             {
//                 if (table[i][j-1] != "|O|" && table[i][j-1] != "|X|")
//                 {
//                     table[i][j-1] = frame;
//                     return true;
//                 } else
//                 {
//                     std::cout << "Error\n";
//                     break;
//                 }
//             } 
//         }
//     }

//     std::cout << std::endl << "-----------------------"  << std::endl;

//     return false;
// }

// void checkWinner(std::string table[][3])
// {
//     using std::string;
//     using namespace std::this_thread;
//     using namespace std::chrono;

//     system("clear");

//     // Check horizont lines of the table.
//     if (table[0][0] == table[0][1] && table[0][1] == table[0][2] ||
//         table[1][0] == table[1][1] && table[1][1] == table[1][2] ||
//         table[2][0] == table[2][1] && table[2][1] == table[2][2] ||

//         // Check vertical lines of the table.
//         table[0][0] == table[1][0] && table[1][0] == table[2][0] ||
//         table[0][1] == table[1][1] && table[1][1] == table[2][1] ||
//         table[0][2] == table[1][2] && table[1][2] == table[2][2] ||

//         // Check diagonal lines of the table.
//         table[0][0] == table[1][1] && table[1][1] == table[2][2] ||
//         table[2][0] == table[1][1] && table[1][1] == table[0][2])
//     {
//         frameMessage("WINNER!");
//         sleep_for(nanoseconds(10));
//         sleep_until(system_clock::now() + 1s);
//         exit(0);

//     } else if (turnCount == 9)
//     {
//         frameMessage("TIE!");
//         sleep_for(nanoseconds(10));
//         sleep_until(system_clock::now() + 1s);
//         exit(0);
//     }
// }

// void endGame()
// {
//     std::cout << "End" << std::endl;
// }

