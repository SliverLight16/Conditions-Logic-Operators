#include <iostream>
using namespace std;

int main() {
    int userAge;

    cin>> userAge;

    if (userAge > 14) {
        cout<< "Can Drive.\n";
    }
    if (userAge > 17) {
        cout<< "Can vote.\n";
    }
   
    if (userAge > 24) {
        cout<< "Can rent a car.\n";
    }

    cout<< "BE A MAN (or woman)";
}