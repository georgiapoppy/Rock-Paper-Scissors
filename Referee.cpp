#include "Referee.h"
#include "Player.h"
#include "Human.h"
#include "Computer.h"

Referee::Referee() {};

Player* Referee::refGame(Player * player1, Player * player2) {
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();
    if (move1 == move2) {
        return nullptr;
    }
    else if ((move1 == 'R' && move2 == 'S') || (move1 == 'S' && move2 == 'P') || (move1 == 'P' && move2 == 'R')) {
        return player1;
    }
    else if ((move1 == 'N') || (move2 == 'N')) {
        std::cout << "ERROR. Input must be either R, S, or P (CAPITAL  LETTERS)" << std::endl;
        return NULL;
    } else {
        return player2;
    }
}
