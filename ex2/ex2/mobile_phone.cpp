#include "mobile_phone.h"
#include <iostream>
#include <string>
using namespace std;

    void mobile_phone::Noize(string alarm) {
        cout << "Time to wake up!" << alarm << "\n";
    }
    void mobile_phone::Call(string ringtone) {
        cout << "Someone is calling!" << ringtone << "\n";
    }
    void mobile_phone::count(string calculator) {
        cout << "how much will it be?" << calculator << "\n";
    }
    void mobile_phone::Update() {
        cout << "Your iphone is updating...\n";
    }
    void mobile_phone::Discharge() {
        cout << "little quantity of energy left\n";
    }
    void mobile_phone::SetBattery(int battery) {
        if (battery >= 0 and battery <= 100) {
            this->battery = battery;   //21.09.23
        }
        else {
            cout << "No\n";
        }
    }
    int mobile_phone::GetBattery() const {
        return battery;
    }
    void mobile_phone::SetBrand(string brand)
    {
        this->brand = brand;
    }
    string mobile_phone::GetBrand()const {
        return brand;
    }
    void mobile_phone::SetAlarm(string alarm) {
        this->alarm = alarm;
    }
    string mobile_phone::GetAlarm()const {
        return alarm;
    }
    void mobile_phone::SetSerialNumber(int serial_number) {
        this->serial_number = serial_number;
    }
    int mobile_phone::GetSerialNumber() const {
        return serial_number;
    }
    void mobile_phone::SetColor(string color) {
        this->color = color;
    }
    string mobile_phone::GetColor() const {
        return color;
    }
