#include <iostream>
#include <cmath>
#include "Reverser.h"



int Reverser::reverseDigit(int value) {
    if (value > 0) {
        Reverser::numStore = (numStore + value%10) * 10;
        return reverseDigit((value/10));
    } else {
        if (numStore>0) {
            Reverser::numStore = numStore / 10;
            return Reverser::numStore;
        } else {
            return -1;
        }
    }
};

std::string Reverser::reverseString(std::string characters) {
    if (characters.length() > 0) {
        Reverser::reversewordStore = reversewordStore + characters.back();
        characters = characters.erase(characters.length() - 1);
        return reverseString(characters);
    } else {
        if (reversewordStore.length() > 0) {
            return Reverser::reversewordStore;
        } else {
            return "ERROR";
        };
    };
};





  


        


