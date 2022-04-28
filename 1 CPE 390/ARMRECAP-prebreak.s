//you should know how to compile a c++ program, look at the call and figure out what the function is calles
//the command is g++ -02 -S main.cc
//lets just imagine the function si called f

/*
More things to know
how many integer registers are ther in AARCH64? x0 to x30
w0 to w30 are the low half of each x register
x31 is 0
x30 is the stack pointer so you can't use it
x29 is the load register so you can use that one either
x28 is the fram pointer so don't use that one either
so really is x0 to x27 for practical purposes

floating points
there are 32, 128-bit, vector registers, they are labeled q
q0 to q31, these are all good, not not-allowed ones
d0 is the low half of q0
s0 is the low hald of d0

for integer computations just use x, for double use d
 */

    .global f
f:
    mov w0, w5 //this means w0 = w5, the high part of w0 = 0
    //x0 = 0x000000000 (whatever is in w0), that is a hex number since we just learned hex
    mov x2, #254 //this is the immediate mode, you cannot do this with a number bigger than 255 cause of the number of bits

    ldr x3, [x4] //[x4] is pointer, x3=load from memory at location x4
    ldr x3, [x4], #8 //x3=load from memory at x4, then x4=x4+8
    ldr x5, [x4, #8] //this is x5= load from memory at x4+8, without changing x4

    //for ever ldr there is a corresponding str (store)

    str x3, [x0, #4] //write x3 to location x0+4 (wihtout changing the value of x0)

    ldr x5, =1738 //this is called sudo instruction it can read any number but the price is that it has to read twice. mov only requires 1 read so it is faster
    ret 

    .global loadxyz
loadxyz:
//load double x,y,z given a location in memory x0
    ldr d0, [x0]
    ldr d1, [x0, #8] //#8 takes us to the next 64 bits, its 8 bytes
    ldr d2, [x0, #16]
    ret

    .global loadxyzdouble
loadxyzdouble:
    ldr d0, [x0]
    ldr d1, [x0, #8]
    ldr d2, [x0, #16]

    //load 128 bits into quad vecot register?
    ldr q0, [x0]



/*
converting an unsigned 32 bit integer to an unsigned 64 bit integer in c++
uint64_t f(uint32_t a) {
    return a;
}

and with signed integers:
int64_t f(int32_t a) {
    return a;
}
*/
