#include <iostream>
#include "Dog.h"

using namespace std;

int main() {
    Dog dog1 = Dog("Xena");

//VARIABLES


//PROGRAM
    dog1.run(5, 8);// dog runs 3+ legs
    dog1.wag(13, 400);//0 - 1000
    dog1.setWeight(89);//weight of dog over 0 lbs
    dog1.bark(9);//barking, depends on weight +/- 100 lbs
    dog1.setNumberOfLegs(4); //0 - 4 at least 3 to run
    dog1.setHappiness(true); //addBone function makes dog happy
    dog1.addBone(); //sets happiness to true **dynamically declares a new Bone**

    return 0;
}