/*
Aluno - J�rdesson Ribeiro
Curso - Ci�ncia da computa��o UFPI
Disciplina - Laboratorio de programa��o
Resumo quest�o - Dado uma palavra, verificar se � Pal�ndromo
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){
    char nome[30], inverso[30];
    int i = 0, length, response = 1;
    printf("Digite o nome: ");
    gets(nome);
    length = strlen(nome) - 1;
    while(length >= 0){
        
        if(tolower(nome[length]) != tolower(nome[i])){
            response = 0;
            break;
        }

        length--;
        i++;
    }    

    printf(response == 0 ? "Nao e palindromo" : "E palindromo");
    

    return 0;
}