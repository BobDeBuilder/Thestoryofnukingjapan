#include "PLAYER.h"
#include <iostream>
    Player::Player(){
        choice = 0;
        name = "";
    }
    Player::~Player(){
    }
    void Player::setChoice(int choice){
        this->choice = choice;
    }
    int Player::getChoice(){
        return choice;
    }
    void Player::setName(std::string name){
        this->name = name;
    }
    std::string Player::getName(){
        return name;
    }
    void Player::displayName(){
        std::cout << name;
    }
