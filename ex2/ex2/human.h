#include <iostream>
#include <string>
using namespace std;
class human
{
private:
    int height = 192;
    int ears_count = 2;
    double weight = 65.3;
    string name = "Jonathan";
    string eyes_color = "green";
    string noize = "knock";
    int eye;
public:
    void MakeNoize(string noize);
    void Eat(string meal);
    void Hobby(string entertainment);
    void Feel();
    void sleep();
    void Wakeup();
    void opening_door();
    void seteyes(int eye);
    int geteye() const;
};


