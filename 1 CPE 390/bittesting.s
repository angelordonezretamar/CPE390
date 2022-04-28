//how to tell if a register is ODD or EVEN?
//if the rightmost bit is 1 it is odd if it is 0 it is even

bittest:
    //method 1
    and x1, x0, #1 //x1 = x0 and 1
    cmp x1, #0
    bne odd

    //method 2
    tst x0, #1
    bne odd //even

    //method 3
    tst x0, #1
    beq even //odd