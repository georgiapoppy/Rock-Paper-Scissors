#include "Computer.h"
#include "Player.h"
#include <string.h>
#include <random> 

char Computer::makeMove() {
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<>dis(1,3);
    int random = dis(gen);
    if (random == 1) {
        return 'R';
    } else if (random == 2) {
        return 'P';
    } else if (random == 3) {
        return 'S';
    }
    return 'N';
}

string Computer::getName() {
    return "Computer";
}
