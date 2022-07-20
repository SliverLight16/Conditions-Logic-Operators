#include <iostream>
using namespace std;

int main() {
    int userNum;
    cin>> userNum;

    if (userNum < 0) {
        cout<< "< 0";
    }
    else if (userNum < 10) {
        cout<< "0-9";
    }
    else if (userNum < 20) {
        cout<< "10-19";
    }
    else
        cout<< "Big Num";
//Implicit Detection - if the first "if" is false then it is given that userNum is greater than or equal to zero, so no need
}