#include "biblioteca.h"
#include <stdio.h>
#include <string.h>

void CriaBiblioteca(tLivro livros[], int livrosCadastrados){
    livrosCadastrados = 0;

    for(int i=0; i<100; i++){
        livros[i].disponivel = 0;
        livros[i].id = i;
    }
}

void AdicionarLivros(tLivro livros[], int livrosCadastrados){
    int i=0, j=0;

    printf("\nCadastro novo livro: \n");
    printf("Autor: ");
    scanf("%s", livros[livrosCadastrados].autor);
    printf("\n");

    printf("Livro: ");
    scanf("%s", livros[livrosCadastrados].titulo);
    printf("\n");

    printf("Ano publicacao: ");
    scanf("%d", &livros[livrosCadastrados].anoPublicacao);

    livros[livrosCadastrados].disponivel = 0;
    livros[livrosCadastrados].id = livrosCadastrados;
}

void ImprimirTodosLivros(tLivro livros[], int livrosCadastrados){
    printf("\n LIVROS CADASTRADOS \n");
    for(int i=0; i<=livrosCadastrados; i++){
    
    }
}

void ImprimirLivro(tLivro livros[], int livrosCadastrados){
    printf("Livro: %s, Autor: %s, Ano: %d, ID: %d", livros[i].titulo, livros[i].autor, livros[i].anoPublicacao, livros[i].id);
    if(livros[i].disponivel == 0){
        printf(", DISPONIVEL\n");
    }else{
        printf(", INDISPONIVEL\n");
    }
}

void RemoverLivros(tLivro livros[], int livrosCadastrados){
    char identificacao[100];

    printf("Informe o Título ou Id para remover o livro: ");
    scanf("%s", identificacao);

    for(int i=0; i<=livrosCadastrados; i++){
        if(strcmp(livros[i].titulo, identificacao) == 0 || strcmp(livros[i].id, identificacao)){
            strcpy(livros[i].titulo, NULL);
            strcpy(livros[i].autor, NULL);
            livros[i].disponivel = 1;
            livros[i].anoPublicacao = NULL;
            
            break;
        }
    }

}

void BuscarLivros(tLivro livros[], int livrosCadastrados){
    char livro[100];

    printf("Informe o Título para cuscar o livro: ");
    scanf("%s", livro);

    for(int i=0; i<=livrosCadastrados; i++){
        if(strcmp(livros[i].titulo, livro) == 0){
            strcpy(livros[i].titulo, NULL);
            strcpy(livros[i].autor, NULL);
            livros[i].disponivel = 1;
            livros[i].anoPublicacao = NULL;
            
            break;
        }
    }
}