#include <iostream>
using namespace std;

class door {

private:
    int size = 190;
    int width = 100;
    string color = "brown";
    string kh_color = "gold";
    string handle_size = "black";
    int handle;
public:
    void open() {
        cout << "door is opening\n";
    }
    void close() {
        cout << "door is closing\n";
    }
    void closing(string key) {
        cout << "door is closing with a key" << key << "\n";
    }
    void opening(string key) {
        cout << "door is opening with a key" << key << "\n";
    }
    void sethandle(int handle) {   
        if (handle = 1)
        {
            this->handle = handle;     //21.09.23
        }
        else {
            cout << "You don`t have handle\n";            
        }
    }
    int gethandle() const {    
        return handle;
    }
};
//class mobile {
//private:
//    string model;
//    int battery;
//    int price;
//public:
//    void setbattery(int b) {
//        if (b >= 0 and b <= 100) {
//            battery = b;
//        }
//        else {
//            cout << "No\n";
//        }
//    }
//    int getbattery() const {
//        return battery;
//    }
//    void setprice(int price) {
//        if (price >= 0)
//        {
//            this->price = price;
//        }
//        else
//        {
//            cout << "no\n";
//        }
//    }
//    void setmodel(double model) {
//        if (model >= 1 and model <= 15)
//        {
//            this->model = model;   
//        }
//        else {
//            cout << "No\n";
//        }
//    }
//    string model() const {
//        return model;
//    }
//};

#include "mobile_phone.h"
int main()
{
    mobile_phone m;
}


