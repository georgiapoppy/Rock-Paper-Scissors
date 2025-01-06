#include <iostream>
#include <string.h>
#include "Player.h"

#ifndef HUMAN_H
#define HUMAN_H

#include <fstream>

using namespace std;

class Human : public Player {
       private:
          string name;
          ofstream highscores("highscores.txt");
       public:
          Human();
          Human(string name1);
          string makeMove() override;
          string getName() override;
          void addUser(string name1);
          void changeHighscore(string name1, int highscore1);
};

#endif
