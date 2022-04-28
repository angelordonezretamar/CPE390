//pretend this is in assembler code

    .globl main
main:
    push    {LR} //pushes link register on the star
    bl  myfunc //link register equals PC, and PC equals myfunc
    //comes back to here
    pop {LR} //pops it back
    ret // gets out

myfunc:
    ...
    ...
    ret //PC goes back to link register



//writing loops
//write a loop that starts with 1, and keeps adding 1 till you get to 100

func:
    mov w1, 1 //set the variable to 1 once
loop:
//now add 1 to w1 
    add w1,w1,1 //this translates to w1 = w1 +1, note there is a limit to the numbers you use in these commands (8bits)
    cmp w1, 100 //compare0
    ble loop //branch if not less than or equal to loop, this will make it repeat the loop 100 times

