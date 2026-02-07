//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
  private:
    int TRACK LENGTH = 15;
    int NUM_HORSES = 5;
    int horseList[NUM_HORSES] = {0,1,2,3,4};
  public:
    Race();
    void advance();
};

#endif
