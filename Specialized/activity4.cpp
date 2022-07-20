#include <iostream>
using namespace std;

int main () {
    int timeHour; 
    int timeMinute;
    float tollAmount;

    cin>> timeHour;
    cin>> timeMinute;

    if (timeHour < 6) { 
        tollAmount = 1.50;
    }
    else if (timeHour < 10) {
        tollAmount = 4.60;
    }
    else if (timeHour < 18) {
        tollAmount = 2.30;
    }
    else {
        tollAmount = 1.50;
    }
 
    cout<< "Toll: $";
    cout<< tollAmount;
}