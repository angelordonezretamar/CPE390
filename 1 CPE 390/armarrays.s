//imagine we are given x0= pointing to an array, and w1=length or array
    .global sumarray
sumarray:
    //1st method
    mov x3, 0
1:
    ldr x2, [x0], 8//x2 = memory of x0, x0=x0+8 autoincrementing 
    add x3, x3, x2
    sub w1, w1, 1
    cmp w1, 0
    bne 1b
    mov x3, w0
    ret

//now sumarray with 32 bits
sumarray32:
    //1st method
    mov x3, 0
1:
    ldr w2, [x0], 4//x2 = memory of x0, x0=x0+8 autoincrementing 
    add x3, x3, x2
    subs w1, w1, 1 //skips the compare
    bne 1b
    mov x3, w0
    ret