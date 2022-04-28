#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 3;
    int c = a << b; // 00000000000000000000000000010000 = 16
    /*
    in assembler:
    lsl w0, w1
    lsl w0, #3
    */
   uint64_t d = 0xFEEDF001U >> 2; // 11111110111011011111000000000001
   //0011111111101110110111110000000000

   //2s compliment arithmetic
   int8_t e = 0B10010011; //
   //first flip every 1 to a 0 01101100
   //then add 1            =   01101101
   //this is 64+45 = 109, really its -109 since we inverted every bit to start

}