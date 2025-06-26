#include <stdio.h>
#include <stdlib.h>


#include "C:\CadStore\bibliography\cadastro_cliente\cliente.h"
#include "C:\CadStore\bibliography\cadastro_funcionario\funcionario.h"

#include "C:\CadStore\bibliography\Edit_cliente\Edit_C.h"
#include "C:\CadStore\bibliography\Edit_funcionario\Edit_F.h"

#include "C:\CadStore\bibliography\pesquisa_cliente\pesquisa_C.h"
#include "C:\CadStore\bibliography\pesquisa_funcionario\pesquisa_F.h"

int main(int argc, char *argv[]) {
    int operacao, tipo;

    if(argc != 3){
        printf("\n\tERRO\n\tDigite apenas 2 argumentos validos\n\n");
        return 1; 
    }

    operacao = atoi(argv[1]);
    tipo = atoi(argv[2]);

    if(operacao < 1 || operacao > 3){
        printf("\n\tERRO\n\tDigite:\n\t1 para cadastro\n\t2 para pesquisa\n\t3 para editar\n\n");
        return 1;
    }else if(tipo != 1 && tipo != 2){
        printf("\n\tERRO\n\tDigite:\n\t1 para cliente\n\t2 para funcionario\n\n");
        return 1;
    }

    if(operacao == 1){ 
        if(tipo == 1){
            cadastro_cliente();  
        } else if(tipo == 2) {
            cadastro_funcionario();
        }
    }else if(operacao == 2){ 
        if(tipo == 1){
            pesquisa_cliente();
        }else if(tipo == 2){
            pesquisa_funcionario();
        }
    }else if(operacao == 3){ 
        if(tipo == 1){
            edit_cliente();
        }else if(tipo == 2){
            edit_funcionario();
        }
    }

    return 0;
}
