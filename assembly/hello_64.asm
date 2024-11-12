
section .data
    hello db 'Hello, World!', 0

section .text
    global _start

_start:
    ; 输出字符串
    mov eax, 4          ; 系统调用号 (sys_write)
    mov ebx, 1          ; 文件描述符 (stdout)
    mov ecx, hello      ; 字符串地址
    mov edx, 13         ; 字符串长度
    int 0x80            ; 调用内核

    ; 退出程序
    mov eax, 1          ; 系统调用号 (sys_exit)
    xor ebx, ebx        ; 退出代码 0
