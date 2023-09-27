#include "weights.h"
#include <iostream>
#include <string>
using namespace std;

void weights::inclusion(string button_on) {
    cout << "00000" << button_on << "\n";
}
void weights::unit(string button_unit) {
    cout << "turn on oz mode" << button_unit << "\n";
}
void weights::weighting(human& who) {
    cout << "calculating weight" << "\n";
}
void weights::light(string light_button) {
    cout << "info platform is glowing";
}
void weights::setpcs(int pcs) {
    if (pcs = 1) {
        this->pcs = pcs;    //21.09.23
    }
    else {
        cout << "You don`t have button pcs\n";
    }
}
int weights::getpcs() const {
    return pcs;
}
