#include <iostream>
#include <fstream>
#include <string.h>
#include "Player.h"

#ifndef HUMAN_H
#define HUMAN_H

#include <fstream>

using namespace std;

class Human : public Player {
       private:
          string name;
       public:
          Human();
          Human(string name1);
          char makeMove() override;
          string getName() override;
};

#endif
