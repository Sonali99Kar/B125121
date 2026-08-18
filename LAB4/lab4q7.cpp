#include <iostream>
#include <string>

// Forward declaration of GameManager
class GameManager;

class Player {
private:
    std::string playerName;
    int health;
    int score;
    int level;

public:
    // Constructor
    Player(std::string name, int hp, int sc, int lvl)
        : playerName(name), health(hp), score(sc), level(lvl) {}

    // Declare GameManager as a friend class
    friend class GameManager;
};

class GameManager {
public:
    // 1. Function to display full player details
    void displayPlayerDetails(const Player& p) {
        std::cout << "\n--- Player Details ---" << std::endl;
        std::cout << "Name  : " << p.playerName << std::endl;
        std::cout << "Health: " << p.health << std::endl;
        std::cout << "Score : " << p.score << std::endl;
        std::cout << "Level : " << p.level << std::endl;
    }

    // 2. Function to check whether the player is alive
    void checkIsAlive(const Player& p) {
        if (p.health > 0) {
            std::cout << "Status: " << p.playerName << " is Alive! (Health: " << p.health << ")" << std::endl;
        } else {
            std::cout << "Status: " << p.playerName << " is Dead! (Health: " << p.health << ")" << std::endl;
        }
    }

    // 3. Function to display the player's current level and score
    void displayLevelAndScore(const Player& p) {
        std::cout << p.playerName << "'s Current Level: " << p.level 
                  << " | Current Score: " << p.score << std::endl;
    }
};

int main() {
    // Creating Player objects
    Player player1("reema", 85, 2400, 5);
    Player player2("teera", 0, 1200, 3);

    // Creating a GameManager object
    GameManager manager;

    // Testing functions for Player 1
    manager.displayPlayerDetails(player1);
    manager.checkIsAlive(player1);
    manager.displayLevelAndScore(player1);

    // Testing functions for Player 2
    manager.displayPlayerDetails(player2);
    manager.checkIsAlive(player2);
    manager.displayLevelAndScore(player2);

    return 0;
}