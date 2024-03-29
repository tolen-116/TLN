#include <iostream>
using namespace std;

class myClass
{
    public:
        int data;
        void function()
        {
           // data = x;
            cout << data << endl;
        }
};

int main()
{
    int myClass::*ptrData = &myClass::data;
    void (myClass::*ptrFunction)() = &myClass::function;
    myClass obj;
    obj.*ptrData = 38;
    (obj.*ptrFunction)();

    return 0;
}