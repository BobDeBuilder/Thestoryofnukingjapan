  #include "NCLOCK.h"
  
  Clock::Clock(){
    t_ime = 0.0;
  }
  Clock::Clock(float t_ime){
    this->t_ime = t_ime;
  }
  Clock::~Clock(){}
  void Clock::add1Min(){
    t_ime += 0.01;
  }
  void Clock::add5Min(){
    t_ime += 0.05;
  }
  void Clock::add10Min(){
    t_ime += 0.10;
  }
  void Clock::add30Min(){
    t_ime += 0.30;
  }
  void Clock::setTime(float t_ime){
    this->t_ime = t_ime;
  }
  int Clock::getTime(){
    return t_ime;
  }
