#include <iostream>
#include "Dog.h"

using namespace std;

int main() {

//PROGRAM
//    Dog dog1("Fido");
//    dog1.setWeight(5.0);
//    dog1.bark(5);
//    dog1.setNumberOfLegs(3);
//    dog1.run(20,400);
//    dog1.addBone();
//    dog1.wag(10,550);

Dog dog2("Xena");
    dog2.setNumberOfLegs(4); //0 - 4 at least 3 to run
    dog2.run(5, 1000);// dog runs 3+ legs
    dog2.setHappiness(true); //addBone function makes dog happy
    dog2.wag(13, 200);//0 - 1000
    dog2.setWeight(189);//weight of dog over 0 lbs
    dog2.bark(9);//barking, depends on weight +/- 100 lbs
    dog2.addBone(); //sets happiness to true **dynamically declares a new Bone**

    return 0;
}