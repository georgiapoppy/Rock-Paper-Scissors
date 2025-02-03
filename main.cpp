#include "Player.h"
#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include <unistd.h>

using namespace std;

int main() {

    std::cout << "             ____   ___   ____ _  __ " << std::endl;
    usleep(300000);
    std::cout << "            |  _ \\ / _ \\ / ___| |/ / " << std::endl;
    usleep(300000);
    std::cout << "            | |_) | | | | |   | ' /  " << std::endl;
    usleep(300000);
    std::cout << "            |  _ <| |_| | |___| . \\  " << std::endl;
    usleep(300000);
    std::cout << "            |_| \\_\\\\___/ \\____|_|\\_\\ " << std::endl;
    usleep(300000);
    std::cout << "          ____   _    ____  _____ ____  " << std::endl;
    usleep(300000);
    std::cout << "         |  _ \\ / \\  |  _ \\| ____|  _ \\ " << std::endl;
    usleep(300000);
    std::cout << "         | |_) / _ \\ | |_) |  _| | |_) |" << std::endl;
    usleep(300000);
    std::cout << "         |  __/ ___ \\|  __/| |___|  _ < " << std::endl;
    usleep(300000);
    std::cout << "         |_| /_/   \\_\\_|   |_____|_| \\_\\ " << std::endl;
    usleep(300000);
    std::cout << "   ____   ____ ___ ____ ____   ___  ____  ____   " << std::endl;
    usleep(300000);
    std::cout << "  / ___| / ___|_ _/ ___/ ___| / _ \\|  _ \\/ ___|  " << std::endl;
    usleep(300000);
    std::cout << "  \\___ \\| |    | |\\___ \\___ \\| | | | |_) \\___ \\  " << std::endl;
    usleep(300000);
    std::cout << "   ___) | |___ | | ___) |__) | |_| |  _ < ___) | " << std::endl;
    usleep(300000);
    std::cout << "  |____/ \\____|___|____/____/ \\___/|_| \\_\\____/  " << std::endl;
    usleep(300000);

    std::cout << std::endl; 
    std::cout << "-----------------------------------------------------" << std::endl;   
    std::cout << std::endl; 
    usleep(300000);                                  
    std::cout << "Welcome! Play against a computer and try to win." << std::endl;
    usleep(300000);
    std::cout << "Type R for Rock, P for Paper, and S for Scissors." << std::endl;
    usleep(300000);
    std::cout << "Type YES to play again and NO to stop :)" << std::endl;    
    usleep(300000);
    std::cout << std::endl; 
    std::cout << "-----------------------------------------------------" << std::endl;   
    usleep(300000);
    std::cout << std::endl; 

    std::string humanName;
    std::cout << "ENTER NAME: ";
    std::getline(std::cin >> std::ws, humanName);
    std::cout << std::endl;
    usleep(300000);
    std::cout << "-----------------------------------------------------" << std::endl;   
    usleep(300000);
    std::cout << std::endl; 

    Referee referee;
    Human human(humanName);
    Computer computer;

    int winStreak = 0;
    int highscore = 0;

    std::string playAgain = "YES";

    while (playAgain != "NO") {
        Player* player = referee.refGame(&human, &computer);
        
        if (player == nullptr) {
            usleep(300000);
            std::cout << "It's a tie!" << std::endl;
            usleep(300000);
        } else {
            string name = player->getName();
            usleep(300000);
            std::cout << name << " Wins!" << std::endl;
            usleep(300000);
            if (name == humanName) {
                winStreak++;
            } else {
                winStreak = 0;
            }
            if (winStreak > highscore) {
                highscore = winStreak;
            }
        }
        
        std::cout << std::endl;
        std::cout << "-----------------------------------------------------" << std::endl;   
        std::cout << std::endl;
        usleep(300000);
        std::cout << "CURRENT WIN STREAK: " << winStreak << std::endl;
        usleep(300000);
        std::cout << "HIGHSCORE: " << highscore << std::endl;
        std::cout << std::endl;
        std::string playAgain;
        usleep(300000);
        std::cout << "Would you like to play again? Type YES or NO: ";
        std::cin >> playAgain;
        std::cout << std::endl; 
        usleep(300000);
        if (playAgain == "NO") {
            break;
        }
    }
};
