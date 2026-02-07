//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
  private:
    int TRACK LENGTH;
    int NUM_HORSES;
    int trackLength;
  public:
    Horse();
    void init(int index, int trackLength);
    void printLane();
    void advance();
    bool isWinner();
};

#endif
