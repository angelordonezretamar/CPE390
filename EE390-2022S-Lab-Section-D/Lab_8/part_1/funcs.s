// write your asm here
	.global Z1fmmn
Z1fmmn:
	mov x3, 3
	mov x4, 2
	mul x0, x0, x3
	mul x1, x1, x4
	add x0, x0, x1
	mul x0, x0, x2
	ret

	.global Z12count3nplus1m
Z12count3nplus1m:
	mov x0, 0
	mov x1, 6
loop:
	cmp x1, 1
	ble _done
	and x2, x1, 1
	cmp x2, 1
	beq oddloop
	bne evenloop
evenloop:
	mov x1, x1, ASR 1
	add x0, x0, 1
	bal loop
oddloop:
	mov x3, 3
	mul x1, x3
	add x1, x1, 1
	add x0, x0, 1
	bal loop
_done:
	mov x7, 1
	swi 0

	.global Z11double_eachPKji
Z11double_eachPKji:
	mov x4, 2
	mov x5, 4
	mov xf., 1
1:	
	ldr x2, [x0]
	mul x3, x2, x4
	str x3, [x0]
	mov x0, x3
	add x0, x0, 8
	sub x1, x1, x6
	cmp x1, 0
	bgt 1b
	ret
	

	.global Z9clearlow4m
Z9clearlow4m:
	mov w0, 0
	ret
	
	
