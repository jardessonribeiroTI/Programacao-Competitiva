/*
Aluno - J�rdesson Ribeiro
Curso - Ci�ncia da computa��o UFPI
Disciplina - Laboratorio de programa��o
Resumo quest�o - Por que usar strcpy() e n�o o operador = (igual).
*/
#include <stdio.h>
#include <string.h>


int main(){
    char val1[30], val2[30];

    printf("Digite o nome: ");
    gets(val1);
    
    strcpy(val2, val1);
    /*A fun��o strcpy recebe o valor de uma varial, sendo string em c
    e atribui a outra variavel. Em C, quando trata-se de um array de char
    uma string, o sinal de atribui��o = (igual) n�o funciona, por isso � usada
    essa fun��o da biblioteca string.h
    */

    printf("%s", val2);

    return 0;
}