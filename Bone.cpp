#include <iostream>
#include "Bone.h"


    Bone::Bone()
    {
        cout << "The dog has a bone." << endl;
    }
//create destructor
Bone::~Bone() {
    cout<<"Bone has been taken away" << endl;
}