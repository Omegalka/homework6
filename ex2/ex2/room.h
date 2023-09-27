#include <iostream>
#include <string>
using namespace std;
class room
{
private:
    int height = 250;
    int width = 500;
    int window;
    string name = "bedroom";
    string walls_color = "yellow";
public:
    void Noize(human& who);
    void exist();
    void Destroy();
    void Repair(human& who);
    void Feel();
    void setwindow(int window);
    int getwindow() const;
};

