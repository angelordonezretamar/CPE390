// write your arm code here
    .global _Z9factoriali
_Z9factoriali:
    mov w1, #1
    1:
        mul w1, w1, w0
        sub w0, w0, #1
        cmp w0, #0
        bgt 1b
        mov w0, w1
        ret                  

    .global _Z8evenProdii
_Z8evenProdii:
    mov w2, #1
    1:
        tst w0, #1
        beq even
        add w0, w0, #1
        cmp w1, w0
        bne 1b
        mov w0, w2 
        ret
    even:
        mul w2, s2, w0
        ret