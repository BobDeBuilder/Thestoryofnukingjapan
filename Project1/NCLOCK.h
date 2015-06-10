#ifndef NCLOCK_H
#define NCLOCK_H

class Clock{
private:
  float t_ime;
public:
  Clock();
  ~Clock();
  void add1Min();
  void add5Min();
  void add10Min();
  void add30Min();
  int getTime();
};


#endif
