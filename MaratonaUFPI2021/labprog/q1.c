/*
Aluno - J�rdesson Ribeiro
Curso - Ci�ncia da computa��o UFPI
Disciplina - Laboratorio de programa��o
Resumo quest�o - Dado uma palavra, pegar o tamanho dela e printa, de forma
crescente at� seu nome.
Exemplo : ceu
		  ceu ceu
		  ceu ceu ceu	
*/
#include <stdio.h>
#include <string.h>


int main(){
    char nome[30];
    int i, p;
    printf("Digite o nome: ");
    gets(nome);

    for (i = 1; i <= strlen(nome); i++)
    {
        for (p = 0; p < i; p++)
        {
           printf("%s ", nome);
        }
        printf("\n");
        
    }
    

    return 0;
}