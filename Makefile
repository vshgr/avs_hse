task: input.c output.c main.c inrnd.c quotient.o
	gcc -g -o task input.c output.c main.c inrnd.c quotient.o -no-pie --debug
quotient.o: quotient.asm
	nasm -f elf64 -g -F dwarf quotient.asm -l output.lst

