#include <iostream>
using namespace std;

int main () {
    int userAge;
    int hotelRate;

    cin>> userAge;
    hotelRate = 155;

    if (userAge > 65) {
   hotelRate = hotelRate - 20;
    }
    else {
        hotelRate = hotelRate;
    }

    cout<< "Hotel Rate: ";
    cout<< hotelRate;
}