//player class
#ifndef PLAYER_H
#define PLAYER_H

class Player{
private:
    int choice;  //use this like if there is a menu and you need to choose a number to select an option
public:
    Player();
    ~Player();
    void setChoice(int choice);
    int getChoice();
};


#endif // PLAYER_H
