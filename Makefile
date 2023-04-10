all: geraos principal

geraos: main.c biblioteca.c
    gcc -c main.c biblioteca.c

principal: main.o biblioteca.o
    gcc main.o biblioteca.o -o principal 

clean:
    rm -rf *.o principal
