#include "PLAYER.h"

    Player::Player(){
        choice = 0;
    }
    Player::~Player(){
    }
    void Player::setChoice(int choice){
        this->choice = choice;
    }
    int Player::getChoice(){
        return choice;
    }
