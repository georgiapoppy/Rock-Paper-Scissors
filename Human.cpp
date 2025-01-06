#include "Human.h"
#include "Player.h"
#include <string.h>

Human::Human() {
    name = "Human";
}

Human::Human(string name1) {
    name = name1;
}

string Human::makeMove() {
    string move; 
    std::cout << "Enter move (Rock, Paper, or Scissors): ";
    std::cin >> move;
    return move;
}

string Human::getName() {
    return name;
}

void Human::addUser(string name1) {
    users.push_back(name1);
}

void Human::addHighscore(int highscore1) {
    highscores.push_back(highscore1);
}

void Human::changeHighscore(string name1, int highscore1) {
    for (int i=0; i++; i<users.size()) {
        if (users[i] == name1) {
            highscores[i].push_back(highscore1);
        }
    }
}
