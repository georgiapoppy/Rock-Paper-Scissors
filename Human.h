#include <iostream>
#include <string.h>
#include "Player.h"

#ifndef HUMAN_H
#define HUMAN_H

using namespace std;

class Human : public Player {
       private:
          string name;
          vector<string> users;
          vector<int> highscores;
       public:
          Human();
          Human(string name1);
          string makeMove() override;
          string getName() override;
          void addUser();
          void addHighscore;
};

#endif
