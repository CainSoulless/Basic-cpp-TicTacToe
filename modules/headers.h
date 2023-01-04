#ifndef HEADERS
#define HEADERS

// Funcion prototype.
int banner();
void onePlayer();
short randomNumber();
void twoPlayers();
void turn(bool);
void tablePrint(std::string table[][3]);
bool tableUpdate(std::string, short ,std::string table[][3]);
void checkWinner(std::string table[][3]);
void endGame();
void debug();
void frameMessage(std::string msg)

#endif