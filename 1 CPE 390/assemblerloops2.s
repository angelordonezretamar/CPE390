//if you were to write some function f, you want to call the function and sum th enumbers from 1 to n

    .global f //this must be written first
    //w0=n, w0 is for 32 bits
f:
    mov w1, w0 //so w1 = n, this is the counter (this is like writing for(int i=n; i>0; i--))
    mov w0, 0 //sum = 0, this is the sum
loop:
    add     w0, w0, w1 //sum=sum+i (i is like the counter in this case)
    sub     w1, w1, 1 //this is what is counting down
//first compare and then branch to end the loop
    cmp     w1, 0
    bne     loop //if w1 is not equal to 0 the function will loop
    ret

//now we are gonna make a loop that counts up

    .global f2
f2:
    mov     w1, w2
    mov     w0, 0
    mov     w2, 1
loop2:
    add     w0, w0, w2
    add     w2, w2, 1 //w2 is now our counter, we will add 1 every time up to and including w2=5
    cmp     w2, w1 //w1 is equal to 5
    ble     loop2 //it will loop up to and including 5
    ret

    .global main
main:
    mov     w0, 5 //setting w0 equal to 5 
    bl      f //this in c++ is like saying f(w0) and we set w0=5 

    //bl is "branch and link" which calls the function and returns to the main after returning the value
    //when we return the answer wil be in w0 and will be 15 so we have to reassign w0

    mov     w0, 5
    bl      f2 