//player class
#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
private:
    int choice; //use this like if there is a menu and you need to choose a number to select an option
    std::string name; 
public:
    Player();
    ~Player();
    void setChoice(int choice);
    void setName(std::string name);
    void displayName();
    int getChoice();
};


#endif // PLAYER_H
