#include <stdio.h>
#include "biblioteca.h"

    int main(void) {
    tLivro livros[100];
    int livrosCadastrados, adicionarLivros=0;

    CriaBiblioteca(livros, livrosCadastrados);

    printf("Digite 1 para adcionar um livro");
    scanf("%d", &adicionarLivros);
    while(adicionarLivros == 1){
        AdicionarLivros(livros, livrosCadastrados);
        printf("Digite 1 para adicionar um novo livro e 0 para parar");
    }

    ImprimirLivros(livros, livrosCadastrados);

  return 0;
}
