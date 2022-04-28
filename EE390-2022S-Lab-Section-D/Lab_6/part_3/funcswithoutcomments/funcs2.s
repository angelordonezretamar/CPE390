/*
AUTHOR: Angel T. Ordonez Retamar, Alejandro Saenz-Jativa
CITE: Jason Li, Xavion McClary
PLEDGE: "I pledge my honor that I have abided by the Stevens Honor System" ~Angel T. Ordonez Retamar, Alejandro Saenz-Jativa
*/

//  write your arm code below
	.global _Z3sumi
_Z3sumi:
	mov x1, x0
	mov x0, 0
 	mov x2, 0
loop:
	add x0, x0, 1
 	add x2, x2, x0 
	cmp x0, x1
	bne loop
	mov x0, x2
 	ret

	.global _Z5sumSqii

_Z5sumSqii:
	mov x3, 0
 	mov x2, 0
loop2:
	cmp x0, x1
	bne loop3
	mul x2, x0, x0
	add x3, x3, x2
  	mov x0, x3 
	ret
loop3: 
	mul x2, x0, x0
	add x3, x3, x2
	add x0, x0, 1
	b loop2 