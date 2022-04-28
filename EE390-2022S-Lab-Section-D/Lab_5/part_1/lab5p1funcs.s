        .global _Z3addii
_Z3addii:
        // first function, add you arm code here
        add w0, w0, w1 // w0 = w0 + w1 
        ret // returns w0 

        .global _Z3mulii
_Z3mulii:
        @ second function, add you arm code here
        mul w0, w1, w1 // w0 = w0 *w1 
        ret // returns w0 
