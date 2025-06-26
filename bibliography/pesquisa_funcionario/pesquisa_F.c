#include <stdio.h>
#include <string.h>

#define TAM_CPF 12

void pesquisa_funcionario(){
    char cpf[TAM_CPF];
    char nome_arquivo[150];
    char buffer[1000];

    printf("\n\tDigite o CPF do funcionario que deseja pesquisar: ");
    fgets(cpf, TAM_CPF, stdin);
    cpf[strcspn(cpf, "\n")] = 0; 

    snprintf(nome_arquivo, sizeof(nome_arquivo), "C:\\CadStore\\data\\funcionarios\\funcionario_%s.txt", cpf);

    FILE *arquivo = fopen(nome_arquivo, "r");
    if(arquivo == NULL){
        printf("\n\tFuncionario com CPF %s nao encontrado.\n\n", cpf);
        return;
    } 

    printf("\n\tDados do funcionario:\n");
    while(fgets(buffer, sizeof(buffer), arquivo) != NULL){
        printf("\t%s", buffer);
    }
    
    fclose(arquivo);
}