#include "door.h"
#include <iostream>
#include <string>
using namespace std;

void door::open() {
    cout << "door is opening\n";
}
void door::close() {
    cout << "door is closing\n";
}
void door::closing(string key) {
    cout << "door is closing with a key" << key << "\n";
}
void door::opening(string key) {
    cout << "door is opening with a key" << key << "\n";
}
void door::sethandle(int handle) {
    if (handle = 1)
    {
        this->handle = handle;     //21.09.23
    }
    else {
        cout << "You don`t have handle\n";
    }
}
int door::gethandle() const {
    return handle;
}
