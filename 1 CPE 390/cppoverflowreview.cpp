#include <iostream>
using namespace std;

int main() {
    uint16_t a= 1; //0000000000000001
    for (int i = 0; i < 20; i++) {
        a *=2;
        cout << a << endl;
        //a real overflow example so we can see what happens
        //after 32738 the 16bits cannot handle a number bigger so for the rest of the loop it just prints 0
    }
}