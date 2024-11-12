hello:
	nasm -f arm64 -o hello.o hello_64.asm;ld -v -macos_version_min 10.13 -e _start -static hello.o
