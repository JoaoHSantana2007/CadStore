#include <stdio.h>

#include "C:\Users\jhfcs\Desktop\CadStore\bibliography\cadastro_cliente\cliente.h"

int main(int argc, char* argv[]){
    int parametro_01, parametro_02;

    parametro_01 = atoi(argv[1]);
    parametro_02 = atoi(argv[2]);

    if(argc != 3){
        printf("\n\tERRO\n\tDigite apenas 2 argumentos validos\n\n");
    }else if(argv != 1 || argv != 2){
        printf("\n\tERRO\n\tDigite\n1 para cadstro de clientes\n2 para cadastro de fhncionario\n"); 
    }
    
    return 0;
}