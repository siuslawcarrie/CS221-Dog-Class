#include <iostream>
#include <unistd.h>//usleep (microseconds)
#include "Dog.h"//header file


using namespace std;

Dog::Dog(std::string name) {//constructor function
    this->name = name;
    cout << this->name << " is alive!" << endl;
}


void Dog::run(int howFar, int howFast) {// dog runs 3+ legs
    if (howFast < 0 or howFast > 1000) {//if howFast is out of range, set it to 0 (pause between # printouts)
        howFast = 0;
    }
    int sleepytime = howFast * 1000;//variable to convert usleep microseconds to milliseconds
    if (howFar >= 0 and howFar <= 1000) {//while howFar is in range

        if (this->numberOfLegs < 3) {//function does not run if less than 3 legs
            return;
        } else if (numberOfLegs == 3) {//if exactly 3 legs, pause between #s is 25% greater
            sleepytime *= 1.25;
        }
        cout << this->name << " is fast on " << this->numberOfLegs << " legs. Watch "
             << this->name;//display howFar & howFast values
        cout << " run " << howFar << " miles at " << howFast << " speed." << endl;
        for (int i = 0; i < howFar; i++) {//display # signs to howFar value
            cout << "#";
            cout.flush();
            usleep(sleepytime);//pause between wags
        }
    }
    cout<<endl;
}
void Dog::bark(int numTimes) {//barking, depends on weight +/- 100 lbs
    if (weight < 100) {
        cout <<"My name is "<<this->name<< " and I'm a yap yap dog. " << endl;
        for (int i = 1; i <= numTimes; i++) {

            cout << "Yap!!! " << endl;
        }
    } else {
        cout << "Can you run with the big dogs?" << endl;
        for (int i = 1; i <= numTimes; i++) {
            cout << "WOOF!!! " << endl;
        }
    }
    cout <<"weight = "<<weight << endl;//***TESTING weight DO need endl****
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
    cout<<"Oh no "<<this->name<<" is no longer happy."<<endl<<endl;
}

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
}

void Dog::setWeight(float weight) {//weight of dog over 0 lbs
    if (weight >= 1 and weight <=200) {
        this->weight = weight;//"this" not optional bc of weight parameter, right side is the parameter, left is internal
    }
}

void Dog::setNumberOfLegs(int numLegs) { //0 - 4 at least 3 to run
    if (numLegs > 0 and numLegs <=4) {
        this->numberOfLegs = numLegs;
    }
    else{
        this->numberOfLegs = 4;
    }
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
    cout << this->name << " is no longer with us." << endl;
}