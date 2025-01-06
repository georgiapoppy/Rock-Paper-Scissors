#include "Player.h"
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

int main() {

    std::cout << "            ____   ___   ____ _  __ " std::endl;
    std::cout << "           |  _ \ / _ \ / ___| |/ / " std::endl;
    std::cout << "           | |_) | | | | |   | ' /  " std::endl;
    std::cout << "           |  _ <| |_| | |___| . \  " std::endl;
    std::cout << "           |_| \_\\___/ \____|_|\_\ " std::endl;
    std::cout << "         ____   _    ____  _____ ____  " std::endl;
    std::cout << "        |  _ \ / \  |  _ \| ____|  _ \ " std::endl;
    std::cout << "        | |_) / _ \ | |_) |  _| | |_) |" std::endl;
    std::cout << "        |  __/ ___ \|  __/| |___|  _ < " std::endl;
    std::cout << "        |_| /_/   \_\_|   |_____|_| \_\" std::endl;
    std::cout << "   ____   ____ ___ ____ ____   ___  ____  ____   " std::endl;
    std::cout << "  / ___| / ___|_ _/ ___/ ___| / _ \|  _ \/ ___|  " std::endl;
    std::cout << "  \___ \| |    | |\___ \___ \| | | | |_) \___ \  " std::endl;
    std::cout << "   ___) | |___ | | ___) |__) | |_| |  _ < ___) | " std::endl;
    std::cout << " |____/ \____|___|____/____/ \___/|_| \_\____/  " std::endl;

    std::endl; 
    std::cout << "-----------------------------------------------------" << std::endl;   
    std::endl;                                   
    std::cout << "Welcome to Rock Paper Scissors! Play against a computer and try to win." << std::endl;
    std::cout << "Type R for Rock, P for Paper, and S for Scissors :)" << std::endl;
    std::cout << "Type YES to play again and NO to stop :)" << std::endl;    
    std::endl; 
    std::cout << "-----------------------------------------------------" << std::endl;   
    std::endl; 

    std::string humanName;
    std::cout << "ENTER NAME: ";
    std::cin >> humanName;
    std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;   
    std::endl; 

    Referee referee;
    Human human(humanName);
    Computer computer;

    int winStreak = 0;
    int highscore = 0;

    std::string playAgain = "YES";

    while (playAgain == "YES") {
        Player* player = referee.refGame(&human, &computer);
        
        if (player == nullptr) {
            std::cout << "It's a tie!" << std::endl;
        } else {
            string name = player->getName();
            std::cout << name << " Wins!" << std::endl;
            std::endl;
            if (name == humanName) {
                winStreak++;
            } else {
                winStreak = 0;
            }
            if (winStreak > highscore) {
                highscore = winStreak;
            }
        }

        
        //UPDATE HIGHSCORE

        
        std::cout << "-----------------------------------------------------" << std::endl;   
        std::endl;
        std::cout << "CURRENT WIN STREAK: " << winStreak << std::endl;
        std::cout << "HIGHSCORE: " << highscore << std::endl;
        std::endl;
        std::string playAgain;
        std::cout << "Would you like to play again? Type YES or NO: ";
        std::cin >> playAgain;
        std::endl;
    }
};
