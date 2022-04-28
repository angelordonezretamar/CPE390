

// First test in about 2 and half weeks 
// git add 
// git commit 
// git push 
// learn pass by reference 
// better to use uint64_t in the case where you have code on your 64 bit computer to an 8 bit computer like an arduino since an int on arduino is 8 bits as opposed to 32 bits on pc 
// .global allows anyone to call the function, if not present then only you can access said function 
// _Z1fii: example
// _Z means function
// number after _Z, amount of letters in function name 
// followed by function name 
// followed by parameters 

// Ex: 
// int f(int a, int b){}; 
// _Z1fii
// name mangling: machine has to turn c++ functions into unqiue names cause you can have two functions with same name in c++ 
// bl (branch) get ready to go somewhere and (link) come back 

// function examples 

#include <iostream> 
using namespace std; 

int add(int, int, int, int); // _Z3addiiii
uint64_t divide(uint64_t, uint64_t, uint64_t, uint64_t); 
int prod(int, int, int, int); 
uint64_t max(uint64_t, uint64_t, uint64_t, uint64_t);

int main() {
    int ans1 = add(1,2,3,4);
    cout << ans1 << '\n'; 

    int ans3 = prod(2, 5, 3, 7);
    cout << ans3 << '\n'; 

    uint64_t ans4 = max(4, 1 , 9);
    cout << ans4 << '\n';

}

//FOR AARCH64
//return of an int in arm comes back in w0 
//double - x0 
.globl _Z4prodiiii
// in: w0, w1, w2, w3 
_Z4prodiiii: 
        umul w0, w0, w1 //w0 = w0*w1
        umul w2, w2, w3 //w2 = w2*w3
        umul w0, w0, w2 // w0 = w0*w1*w2*w3 
        ret
.global _Z3maxmm
        // x0, x1, 
_Z3maxmm: // returns max of two numbers 
        //if statement 
        cmp     x0, x1 
        //beq /* branch if equal to */ 
        bgt     greater //branch if greater than 
        //less than or equal to... 
        mov     x0, x1  // x0 = x1 
        ret 
greater: 
        ret 

.global _Z3maxmmm //now for 3 variables 
        // x0, x1, x2 
_Z3maxmm: // returns max of two numbers 
        //if statement 
        cmp     x0, x1, x2 
        //beq /* branch if equal to */ 
        bgt     1f //stands for 1 fold goes down to next 1, you can have as many 1's as you want. Like if we named greater2 = 1: 
        //lesss than or equal to 
        cmp     x1, x2 
        bgt     x1isit //if x1 is max 
        mov     x0, x2 
        ret 

x1isit: 
        mov     x0, x1 
        ret 

greater2: 
        cmp     x0,x2
        bgt     x0isit 
        // if x2 is it 
        mov     x0,x2 
        ret       

x0isit: 
        ret 

//modern computers hate branching due to their pipeline build 
// after assembly code compiles now you have to combine them 