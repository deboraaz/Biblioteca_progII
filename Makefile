all: 
    ./principal

main: principal.o data.o
    gcc principal.o data.o -o principal

geraos: principal.c data.c
    gcc -c principal.c data.c

clean:
    rm -rf *.o principal
