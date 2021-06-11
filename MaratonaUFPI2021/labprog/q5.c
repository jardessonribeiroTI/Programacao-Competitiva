/*
Aluno - J�rdesson Ribeiro
Curso - Ci�ncia da computa��o UFPI
Disciplina - Laboratorio de programa��o
Resumo quest�o - Dizer qual a difer�n�a entre a fun��o strcmp e o 
operador < (menor que)
*/
#include <stdio.h>
#include <string.h>


int main(){
    char val1[30], val2[30];

    printf("Digite o primeiro nome: ");
    gets(val1);
    printf("Digite o segundo nome: ");
    gets(val2);

    if(strcmp(val1, val2) < 0){
        printf("%d", strcmp(val1, val2));
    }else{
        printf("%d", strcmp(val1, val2));
    }
    /*
    A fun��o strcmp, compara as strings, caso seja igual retorna 0(zero)
    Se a 1� for menor, em ordem da tabela ASCII, retorna -1
    Se a 2� for menor, tamb�m em ordem da tabela ASCII, retorna 1
    Ou seja, sendo a 1� abc, e a 2� def, a 1� � menor, pois vem antes 
    de acordo com a tabela
    */

    if(val1 < val2){
        printf("val1 > val2");
    }else{
		printf("val1 < val2");
	}

    /*Nesse if, ele verifica o endere�o de mem�ria, e se sua sequ�ncia �
    maior que a outra, assim, a 1� variavel tende a ser maior que a outra, 
    independente do tamanho da string e ordem dos caracteres.
    */
    

    return 0;
}