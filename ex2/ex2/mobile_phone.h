#include <iostream>
#include <string>
using namespace std;
class mobile_phone
{
private:
        int size = 15;
        int width = 7;
        string brand = "iphone";
        int serial_number = 15;
        string color = "black";
        string alarm = "loud";
        int battery;
public:

        mobile_phone() {
            SetBrand("iphone");
            SetBattery(100);
            SetAlarm("loud");
            SetSerialNumber(15);
            SetColor("black");
        }
        mobile_phone(string brand, int battery) {
            SetBrand(brand);
            SetBattery(battery);
            SetAlarm(alarm);
            SetSerialNumber(serial_number);
            SetColor(color);
        }

        void Noize(string alarm);
            void Call(string ringtone);
            void count(string calculator);
            void Update();
            void Discharge();
            void SetBattery(int battery);
            int GetBattery() const;
            void SetBrand(string brand);
            string GetBrand()const;
            void SetAlarm(string alarm);
            string GetAlarm()const;
            void SetSerialNumber(int serial_number);
            int GetSerialNumber() const;
            void SetColor(string color);
            string GetColor() const;
};


