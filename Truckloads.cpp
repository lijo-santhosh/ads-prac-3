#include "Truckloads.h"
#include <cmath>

int Truckloads::numTrucks(int numCrates, int loadSize) {

        if (numCrates > loadSize) {
    
            return numTrucks(numCrates / 2, loadSize) + numTrucks((numCrates + 1) /2 , loadSize);
} else {
    
    return 1;
            
    }
}
