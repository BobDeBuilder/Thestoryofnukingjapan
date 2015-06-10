  #include "NCLOCK.h"
  
  Clock::Clock(){
    t_ime = 7.00;
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
  int Clock::getTime(){
    return t_ime;
  }
