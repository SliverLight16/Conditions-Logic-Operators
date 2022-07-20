#include <iostream>
using namespace std;

int main() {
    float bodyTemp;
    cin>> bodyTemp;

    if (abs(bodyTemp - 98.6) < 0.00001) {
        cout<< "Normal Guy";
    }
   
    else if (bodyTemp > 98.6) {
        cout<< "You're running a fever";
    }
   
    else {
        cout<< "Are you Cold-blooded?";
    }
}
//When coding it is not reliable to use equality operators to compare decimal number 
//due to how specific, tedoious they are, and the limited space of a processing unit
