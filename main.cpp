#include <iostream>
#include "Dog.h"

using namespace std;

int main() {
    Dog dog1 = Dog("my name is fido\n");

//VARIABLES
    int howFar = 3, howFast = 5, numTimes = 9, numLegs = 4;
    float weight = 8.6;
    bool isHappy = true;

//PROGRAM
    dog1.run(howFar, howFast);// dog runs 3+ legs
    dog1.wag(numTimes, howFast);//0 - 1000
    dog1.setWeight(weight);//weight of dog over 0 lbs
    dog1.bark(numTimes);//barking, depends on weight +/- 100 lbs
    dog1.setNumberOfLegs(numLegs); //0 - 4 at least 3 to run
    dog1.setHappiness(isHappy); //addBone function makes dog happy
    dog1.addBone(); //sets happiness to true **dynamically declares a new Bone**

    return 0;
}