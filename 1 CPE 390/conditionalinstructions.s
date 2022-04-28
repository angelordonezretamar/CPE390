//branches slow down the computer so this fixes that problem
bittesting:
    and x1, x0, #1 //x1 = x0 and 1
    tst x0, #1
    beq even //odd
    umul x5, x5, #19
even:
    //here is the new trick
    tst x0, #1
    umulne x5, x5, #19 //will only multiply if not equal 

    b gothere //always go there
    beq somehwere //go to somewhere if the Z flag =1
    //not only the branch instrucitons are conditional, any instruction can be conditional
    //this way is faster and shorter
    