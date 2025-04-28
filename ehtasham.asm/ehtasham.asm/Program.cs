section.data
    msg db "Hello world!", 0ah

section .text
    global _start

_start:
dosseg
.model small
.stack 100h
.data
var1 db "EQUAL$", 0
var2 db "NOT EQUAL$", 0
var3 db "Less$", 0
var4 db "Greater$", 0
msg1 db "Enter first character: $", 0
msg2 db "Enter second character: $", 0

.code
main proc
    mov ax, @data
    mov ds, ax

    mov dx, offset msg1
    mov ah, 9
    int 21h

    mov ah, 1
    int 21h
    mov bl, al

    mov ah, 02h
    mov dl, 0Dh
    int 21h
    mov dl, 0Ah
    int 21h

    mov dx, offset msg2
    mov ah, 9
    int 21h

    mov ah, 1
    int 21h
    mov bh, al

    mov ah, 02h
    mov dl, 0Dh
    int 21h
    mov dl, 0Ah
    int 21h

    cmp bl, bh
    je L1
    jg L3
    jl L4

L1:
    mov dx, offset var1
    mov ah, 9
    int 21h
    jmp L5

L3:
    mov dx, offset var4
    mov ah, 9
    int 21h
    jmp L5

L4:
    mov dx, offset var3
    mov ah, 9
    int 21h
    jmp L5

L5:
    mov ah, 4ch
    int 21h

main endp
end main
