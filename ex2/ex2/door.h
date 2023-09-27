#include <iostream>
#include <string>
using namespace std;
class door
{
private:
    int size = 190;
    int width = 100;
    string color = "brown";
    string kh_color = "gold";
    string handle_size = "black";
    int handle;
public:
    void open();
    void close();
    void closing(string key);
    void opening(string key);
    void sethandle(int handle);
    int gethandle() const;
};

