all: geraos principal

principal: main.o biblioteca.o
    gcc main.o biblioteca.o -o principal

geraos: main.c biblioteca.c
    gcc -c main.c biblioteca.c

clean:
    rm -rf *.o principal
