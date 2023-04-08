#ifndef _BIBLIOTECA_
#define _BIBLIOTECA_

typedef struct{
  char titulo[100], autor[100];
  int anoPublicacao, disponivel, id; 
  //disponivel == 0 se disponivel e indisponivel se  == 1
}tLivro;

void CriaBiblioteca(tLivro livros[], int livrosCadastrados);
void AdicionarLivros(tLivro livros[], int livrosCadastrados);
void ImprimirLivros(tLivro livros[], int livrosCadastrados);
#endif
