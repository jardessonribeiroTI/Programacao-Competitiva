/*
Aluno - J�rdesson Ribeiro
Curso - Ci�ncia da computa��o UFPI
Disciplina - Laboratorio de programa��o
Resumo quest�o - Dado uma senha, verificar se � igual a que j� est� definida.
*/
#include <stdio.h>
#include <string.h>


int main(){
    char senhaSistema[9] = {'k', 'l', '2', '3', 'f', '5', 'g', '0', '\0'};
    char senhaInserida[30];
    //kl23f5g0
    int resultado;

    while(true){
        printf("Digite a senha: ");
        gets(senhaInserida);
        
        resultado = strcmp(senhaSistema, senhaInserida);
        printf("%s \n", senhaSistema);

        if(resultado == 0){
            printf("Senha valida ...\n");
            break;
        }else{
            printf("Senha invalida ...\n");
        }
    }

    return 0;
}