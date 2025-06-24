#include <stdio.h>

#define TAM_DADOS 100
#define TAM_TEL 16
#define TAM_CPF 12
#define TAM_CEP 9
#define TAM_DATA 11

void perguntas_padro(){

    char nome[TAM_DADOS], email[TAM_DADOS], telefone[TAM_TEL], cpf[TAM_CPF],
        data_de_nascimento[TAM_DATA], cep[TAM_CEP], endereco[TAM_DADOS];
    
    printf("\n\tNome: ");
    fgets(nome, TAM_DADOS, stdin);
    fflush(stdin);

    printf("\tEmail: ");
    fgets(email, TAM_DADOS, stdin);
    fflush(stdin);

    printf("\tTelefone: ");
    fgets(telefone, TAM_TEL, stdin);
    fflush(stdin);
    
    printf("\tCPF: ");
    fgets(cpf, TAM_CPF, stdin);
    fflush(stdin);

    printf("\tData de nascimento: ");
    fgets(data_de_nascimento, TAM_DATA, stdin);
    fflush(stdin);

    printf("\tCEP: ");
    fgets(cep, TAM_CEP, stdin);
    fflush(stdin);

    printf("\tEndereco: ");
    fgets(endereco, TAM_DADOS, stdin);
    fflush(stdin);

    FILE *clientes = fopen("\\Users\\jhfcs\\Desktop\\CadStore\\data\\clientes.txt", "a");
    
    if(clientes == NULL){
        printf("\n\tERRO\n\tArquivo noa gerrado\n\n");
    }

}