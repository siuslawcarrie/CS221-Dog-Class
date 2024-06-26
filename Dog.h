//
// Created by siusl on 5/29/2024.
//
#include "Bone.h"

using namespace std;


#ifndef CS221_DOG_CLASS_DOG_H
#define CS221_DOG_CLASS_DOG_H


class Dog{

private://ATTRIBUTES

    int numberOfLegs; //number of legs, 0 - 4
    string eyeColor; //eye color, any value
    string furColor; //fur color, any value
    float weight; //dog's weight, 1 - 200
    bool isHappy ; //default true
    string name; //any value
    string dogBreed; //any value
    void wagHelper(int numTimes, int howFast);//function to print wags within wag function
    Bone* bone; //nullptr avoids pointer going to a random memory address

public: //Member function declarations
    Dog(string name);
    void setWeight(float weight);//weight of dog over 0 lbs
    void setNumberOfLegs(int numLegs); //0 - 4 at least 3 to run
    void setHappiness(bool isHappy); //addBone function makes dog happy
    void setFurColor(string furColor);
    void setEyeColor(string eyeColor);
    void setDogBreed(string dogBreed);
    string getFurColor();
    string getEyeColor();
    string getDogBreed();
    string getName();
    void addBone(); //sets happiness to true **dynamically declares a new Bone**
    void run(int howFar, int howFast);// dog runs 3+ legs
    void bark(int numTimes);//barking, depends on weight +/- 100 lbs
    void wag(int numTimes, int howFast);//0 - 1000

    ~Dog();
};

#endif //CS221_DOG_CLASS_DOG_H
