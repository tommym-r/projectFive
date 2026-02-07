//horse.cpp

#include <iostream>
#include <random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

Horse::Horse(){
  Horse::position = 0;
  Horse::index = 0;
  Horse::trackLength = 15;
} //end constructor

void Horse::init(int index, int trackLength){
  Horse::position = 0;
  Horse::index = index;
  Horse::trackLength = trackLength;
} //end init

void Horse::advance(){
  int coin = dist(rd);
  Horse::position += coin;
} // end advance

void Horse::printLane(){
  for (int i = 0; i < Horse::trackLength; i++){
    if (i == Horse::position){
      std::cout << Horse::index;
    } else {
      std::cout << ".";
    } // end if
  } // end for
  std::cout << std::endl;
} // end printLane

bool Horse::isWinner(){
  bool result = false;
  if (Horse::position >= Horse::trackLength){
    result = true;
    std::cout << "Horse " << Horse::index << " is the winner!";
  } // end if
  return result;
} // end isWinner
