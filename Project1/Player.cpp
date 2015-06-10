#include "PLAYER.h"
#include <iostream>
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
    void Player::setName(std::string name){
        this->name = name;
    }
    void Player::displayName(){
        std::cout << name;
    }
