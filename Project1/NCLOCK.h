#ifndef NCLOCK_H
#define NCLOCK_H

class Clock{
private:
  float t_ime;
public:
  Clock();
  Clock(float t_ime);
  ~Clock();
  void add1Min();
  void add5Min();
  void add10Min();
  void add30Min();
  void setTime();
  int getTime();
};


#endif
