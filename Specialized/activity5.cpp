#include <iostream>
using namespace std;

int main () {
    int timeHour;
    int timeMinute;
    float tollAmount;
    int numPpl;

    cin>> timeHour;
    cin>> timeMinute;
    cin>> numPpl;

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

    if (numPpl >= 3) {
        if ((timeHour >= 6) and (timeHour <= 10)) {
            tollAmount = tollAmount *0.5;
        }
        else {
            tollAmount = 0.0;
        }
    }
   
 
    cout<< "Toll: $";
    cout<< tollAmount;
}