#include <iostream>
using namespace std;

uint64_t sumit (uint64_t a[], uint32_t n) {
    uint64_t sum = 0;
    for (int i=0; i<n; i++)
        sum += a[i];
    return sum;
}

/*
                IN ASSEMBLER:
for (int i = 0; i < length; i++)
a[i]

    ldr x3, [x4, x2, lsl 3] //left shifting by 3 here is equivalent to multiplying by 2
    add x2, x2, 1
    add x0, x0, x3
    cmp w1, w2
    bhi .L3
    ret
*/