#include <stdio.h>
#include <stdlib.h>

#include "C:\Users\jhfcs\Desktop\CadStore\bibliography\cadastro_cliente\cliente.h"

int main(int argc, char *argv[]) {
    int parametro_01, parametro_02;

    if(argc != 3){
        printf("\n\tERRO\n\tDigite apenas 2 argumentos validos\n\n");
        return 1; 
    }

    parametro_01 = atoi(argv[1]);
    parametro_02 = atoi(argv[2]);

    if(parametro_01 != 1 && parametro_01 != 2){
        printf("\n\tERRO\n\tDigite\n\t1 para cadastro\n\t2 para pesquisa\n\n");
        return 1;
    }else if(parametro_02 != 1 && parametro_02 != 2){
        printf("\n\tERRO\n\tDigite\n\t1 para cliente\n\t2 para funcionario\n\n");
        return 1;
    }else if(parametro_01 == 1){
        if(parametro_02 == 1){
            perguntas_padro();
        }
    }
    

    return 0;
}