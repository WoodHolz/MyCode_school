mov ax, 0b800h
mov ds, ax

mov byte [0x00],'H'
mov byte [0x02],'e'
mov byte [0x04],'l'
mov byte [0x06],'l'
mov byte [0x08],'o'
mov byte [0x0a],','
mov byte [0x0c],'X'
mov byte [0x0e],'8'
mov byte [0x10],'6'
mov byte [0x12],'!'

jmp $

times 510-($-$$) db 0
db 0x55,0xaa