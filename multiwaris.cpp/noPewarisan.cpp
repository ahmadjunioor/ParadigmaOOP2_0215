#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class";
    }
};

class deriverClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya Function dari derived Class";
    }
};

int main() {
    deriverClass a;
    a.perkenalan();

    return 0;
}