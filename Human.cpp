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
    std::cout << "Enter move (R, P, or S): ";
    std::cin >> move;
    return move;
}

string Human::getName() {
    return name;
}

void Human::addUser(string name1) {
    std::string line;
    std::ifstream users("users.txt");
    while (std::getline(users, line)) {
        if (line == name1) {
            return;
        }
    }
    ofstream users("users.txt");
    users << name1 + "\n";
    users << "0\n";
    users.close()
}

void Human::changeHighscore(string name1, int highscore1) {
    std::string line;
    std::ofstream users("users.txt");
    int found = 0;
    while (std::getline(users, line)) {
        if (found = 1) {
            line = highscore1 + "\n";
            found = 0;
        }
        if (line == name1) {
            found = 1;
        }
    }
    users.close()
}

int Human::getHighscore(string name1) {
    std::string line;
    std::ofstream users("users.txt");
    int found = 0;
    int highscore;
    while (std::getline(users, line)) {
        if (found = 1) {
            highscore = line;
            found = 0;
        }
        if (line == name1) {
            found = 1;
        }
    }
    users.close()
        return highscore;
}
