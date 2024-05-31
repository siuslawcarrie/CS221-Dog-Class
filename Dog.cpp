#include <iostream>
#include <unistd.h>//usleep (microseconds)
#include "Dog.h"//header file


using namespace std;

Dog::Dog(std::string name) {//constructor function
    this->name = name;
    cout << this->name << " is alive!" << endl;
}


void Dog::run(int howFar, int howFast) {// dog runs 3+ legs
    if (howFast >= 0 and howFast <= 1000) {
        if (howFar >= 0 and howFar <= 1000) {
//            if (this->numberOfLegs >= 3) {
//                if (numberOfLegs == 3) {
                    howFast *= 1.25;
                    runHelper(howFar, howFast);
//                } else {
//                    runHelper(howFar, howFast);
//                }
//            }
        }
    }
}

void Dog::runHelper(int numTimes, int howFast) {
    int sleepytime = howFast * 1000;//variable to convert usleep microseconds to milliseconds
    for (int i = 0; i < numTimes; i++) {
        cout << "# ";
//        cout.flush();
        usleep(sleepytime);//pause between wags
    }
    cout << endl;

}

void Dog::bark(int numTimes) {//barking, depends on weight +/- 100 lbs
    if (weight < 100) {
        cout << "I'm a yap yap dog. " << endl;
        for (int i = 1; i <= numTimes; i++) {

            cout << "Yap!!! ";
        }
    } else {
        cout << "Can you run with the big dogs?" << endl;
        for (int i = 1; i <= numTimes; i++) {
            cout << "WOOF!!! ";
        }
    }
    cout << endl;
}

void Dog::wag(int numTimes, int howFast) {
    if (isHappy) {
        cout << "Wag time! Wag  " << numTimes << " times!" << endl;
        cout << "Happiness Factor (wag speed): " << howFast << endl;
        wagHelper(numTimes, howFast);
        cout << endl;
        //delete Bone, setting dog to not happy..if bone != null ptr, checks to see if bone is pointing to something, if so, delete it
        if (bone != nullptr) {
            delete bone;
            bone = nullptr;
        }
        isHappy = false; //purple in clion means attribute, this arrow optional
    } else return;
}//0 - 1000

void Dog::wagHelper(int numTimes, int howFast) {
    int sleepytime = howFast * 1000;//variable to convert usleep microseconds to milliseconds
    for (int i = 0; i < numTimes; i++) {
        if (i % 2 == 0) {
            cout << "\\ ";
        } else {
            cout << "/ ";
        }
        usleep(sleepytime);//pause between wags
        cout.flush();


    }
    cout << endl;
}

void Dog::setWeight(float weight) {//weight of dog over 0 lbs
    if (weight <= 0) {
        return;
    } else {
        this->weight = weight;//"this" not optional bc of weight parameter, right side is the parameter, left is internal
    }
}

void Dog::setNumberOfLegs(int numLegs) { //0 - 4 at least 3 to run
    this->numberOfLegs = numLegs;
    }

void Dog::setHappiness(bool isHappy) { //addBone function makes dog happy
    this->isHappy = isHappy; //setter, set internal property left side assign to incoming value/parameter
}

void Dog::addBone() { //sets happiness to true **dynamically declares a new Bone**
    this->bone = new Bone(); //"this" optional, no parameter//new is dynamically assigned can delete it after wag
    this->isHappy = true; //"this" optional
}

//Destructor
Dog::~Dog() {
    this->name = name;
    cout << this->name << " is no longer with us." << endl;
}