#include <iostream>
#include <string>
using namespace std;
class weights
{
private:
    int size = 11;
    int width = 5;
    string color = "gray";
    string weight_plat = "blue";
    int button = 5;
    string fuction = "weighting";
    int pcs;

public:
    void inclusion(string button_on);
    void unit(string button_unit);
    void weighting(human& who);
    void light(string light_button);
    void setpcs(int pcs);
    int getpcs() const;
};

