#include <iostream>
#include "turn.h" 

void twoPlayers()
{
    bool turnPlayer = false;

    while (true)
    {
        turn(turnPlayer);

        if (turnPlayer == false)
        {
            turnPlayer = true;
        } else if (turnPlayer == true)
        {
            turnPlayer = false;
        }
    }
}