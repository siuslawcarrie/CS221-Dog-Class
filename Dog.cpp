#include <iostream>
#include <unistd.h>//usleep (microseconds)
#include "Dog.h"//header file


using namespace std;

Dog::Dog(std::string name) {//constructor function
    this->name = name;
    cout << this->name<<" is alive!"<<endl;
}


void Dog::run(int howFar, int howFast) {// dog runs 3+ legs

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
    cout<<endl;
}

void Dog::wag(int numTimes, int howFast) {
    if (isHappy) {
        cout << "Wag time! Wag  " << numTimes << " times!" << endl;
        cout << "Happiness Factor (wag speed): " << howFast << endl;
        wagHelper(numTimes, howFast);
        cout<<endl;
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
    if (weight <= 0){
        return;
    }
    else {
        this->weight = weight;
    }
}

void Dog::setNumberOfLegs(int numLegs) { //0 - 4 at least 3 to run
if (numLegs < 0 or numLegs > 4){
    numLegs = 4;
}}

void Dog::setHappiness(bool isHappy) { //addBone function makes dog happy
}

void Dog::addBone() { //sets happiness to true **dynamically declares a new Bone**
}
//Destructor
Dog::~Dog() {
    this->name = name;
    cout << this->name<<" is no longer with us."<<endl;
}