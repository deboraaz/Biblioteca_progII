#include <stdio.h>
#include "biblioteca.h"

    int main(void) {
    tLivro livros[100];
    int livrosCadastrados, opcao=1;

    CriaBiblioteca(livros, livrosCadastrados);

      printf("Se não houver livros cadastrados, cadastre antes de realizar as operacoes\n");

    while(opcao != 0){

        printf("\nDigite\n0 - Para encerrar as alteracoes\n1 - Adicionar novo livro\n2 - Remover livro\n3 - Imprimir todos os livros\n4 - Buscar livro\n5 - Emprestar livro\n6 - Devolver livro: ");
        scanf("%d", &opcao);

        //se opcao == 1 vai passar pelos if's e voltar pro while

        if(opcao == 0){
          break;
        }else if(opcao == 1){
          AdicionarLivros(livros, livrosCadastrados);
          livrosCadastrados++;
        }else if(opcao == 2){
          RemoverLivros(livros, livrosCadastrados);
        }else if(opcao == 3){
          ImprimirTodosLivros(livros, livrosCadastrados);
        }else if(opcao == 4){
          BuscarLivros(livros, livrosCadastrados);
        }else if(opcao == 5){
          EmprestarLivros(livros, livrosCadastrados);
        }else if(opcao == 6){
          DevolverLivros(livros, livrosCadastrados);
        }
    }

  return 0;
}
