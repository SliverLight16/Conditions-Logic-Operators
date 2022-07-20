#include <iostream>
using namespace std;

int main() {
    int userChannel;
    cin>> userChannel;

    if ((userChannel >= 2) and (userChannel <= 499)) {
        cout<< "Standard";
    }

    else if ((userChannel >= 1002) and (userChannel <= 1499)) {
        cout<< "High Definition";
    }
    else
        cout<< "Error";   
}