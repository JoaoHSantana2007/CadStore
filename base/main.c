#include <stdio.h>
#include <stdlib.h>

// Inclui os cabeçalhos originais
#include "C:\Users\jhfcs\Desktop\CadStore\bibliography\cadastro_cliente\cliente.h"
#include "C:\Users\jhfcs\Desktop\CadStore\bibliography\cadastro_funcionario\funcionario.h"

// Adiciona os cabeçalhos para edição
#include "C:\Users\jhfcs\Desktop\CadStore\bibliography\Edit_cliente\Edit_C.h"
#include "C:\Users\jhfcs\Desktop\CadStore\bibliography\Edit_funcionario\Edit_F.h"

int main(int argc, char *argv[]) {
    int operacao, tipo;

    if(argc != 3){
        printf("\n\tERRO\n\tDigite apenas 2 argumentos validos\n\n");
        return 1; 
    }

    operacao = atoi(argv[1]);
    tipo = atoi(argv[2]);

    // Verificação dos parâmetros
    if(operacao < 1 || operacao > 3){
        printf("\n\tERRO\n\tDigite:\n\t1 para cadastro\n\t2 para pesquisa\n\t3 para editar\n\n");
        return 1;
    }else if(tipo != 1 && tipo != 2){
        printf("\n\tERRO\n\tDigite:\n\t1 para cliente\n\t2 para funcionario\n\n");
        return 1;
    }

    // Executa a operação selecionada
    if(operacao == 1){ // Cadastro
        if(tipo == 1){
            cadastro_cliente();  
        } else if(tipo == 2) {
            cadastro_funcionario();
        }
    }else if(operacao == 3){ // Edição
        if(tipo == 1){
            edit_cliente();
        }else if(tipo == 2){
            edit_funcionario();
        }
    }
    // Operação 2 (pesquisa) ainda não implementada

    return 0;
}
