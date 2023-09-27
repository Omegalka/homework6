#include "human.h"
#include <iostream>
#include <string>
using namespace std;

void human::MakeNoize(string noize) {
    cout << "Jonathan is knocking!" << noize << "\n";
}
void human::Eat(string meal) {
    cout << "Jonathan is eating" << meal << "\n";
}
void human::Hobby(string entertainment) {
    cout << "Jonathan is playing games" << entertainment << "\n";
}
void human::Feel() {
    cout << "Jonathan is stressed\n";
}
void human::sleep() {
    cout << "Jonathan is sleeping\n";
}
void human::Wakeup() {
    cout << "Jonathan is wake up\n";
}
void human::opening_door() {
    cout << "Jonathan is opening door\n";
}
void human::SetEyes(int eye) {
    if (eye >= 0 and eye <= 2) {   
        this->eye = eye;
    }
    else {
        cout << "You are unusual human\n";
    }
}
int human::geteye() const {
    return eye;
}
