#include "Human.h"
#include "Player.h"
#include <string>
#include <fstream>

Human::Human() {
    name = "Human";
    std::string line;
}

Human::Human(string name1) {
    name = name1;
}

char Human::makeMove() {
    char move; 
    std::cout << "Enter move (R, P, or S): ";
    std::cin >> move;
    if ((move != 'R') && (move != 'P') && (move != 'S')) {
        return 'N';
    }
    return move;
}

string Human::getName() {
    return name;
}