#include "room.h"
#include <iostream>
#include <string>
using namespace std;

    void room::Noize(human& who) {
        cout << "Someone knocking on the door\n";
    }
    void room::exist() {
        cout << "Room is existing\n";
    }
    void room::Destroy() {
        cout << "Walls are falling\n";
    }
    void room::Repair(human& who) {
        cout << "room is repared by humans\n";
    }
    void room::Feel() {
        cout << "room can`t feel anything, maybe";
    }
    void room::SetWindow(int window) {
        if (window >= 0) {
            this->window = window;    
        }
        else {
            cout << "your room have windows\n";
        }
    }
    int room::GetWindow() const {
        return window;
    }
