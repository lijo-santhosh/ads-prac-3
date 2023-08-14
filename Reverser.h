#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser {        // The class
  public: 
  int numStore = 0;   
  std::string reversewordStore;        // Access specifier
    int reverseDigit(int);
    std::string reverseString(std::string);
};

#endif