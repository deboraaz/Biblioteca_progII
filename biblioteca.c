#include "biblioteca.h"
#include <stdio.h>

void CriaBiblioteca(tLivro livros[], int livrosCadastrados){
    livrosCadastrados = 0;

    for(int i=0; i<100; i++){
        livros[i].disponivel = 0;
        livros[i].id = i;
    }
}

void AdicionarLivros(tLivro livros[], int livrosCadastrados){
    int i=0;
    char a;

    printf("\nCadastro novo livro: \n");
    printf("Digite: Titulo, Autor, Ano publicacao: ");
    while(scanf("%c, &livros[livrosCadastrados].titulo[i]") != ','){
        i++;
    }
    scanf("%c", &a);//fiz isso para consumir o espaço
    i=0;
    while(scanf("%c, &livros[livrosCadastrados].autor[i]") != ','){
        i++;
    }
    scanf("%c", &a);
    scanf("%d", &livros[i].anoPublicacao);
}

void ImprimirLivros(tLivro livros[], int livrosCadastrados){
    printf("\n\n LIVROS CADASTRADOS \n\n");
    for(int i=0; i<livrosCadastrados; i++){
        printf("Livro: %s, Autor: %s, Ano: %d, ID: %d", livros[i].titulo, livros[i].autor, livros[i].anoPublicacao, livros[i].id);
        if(livros[i].disponivel == 0){
            printf(" DISPONIVEL\n");
        }else{
            printf("INDISPONIVEL");
        }
    }
}
