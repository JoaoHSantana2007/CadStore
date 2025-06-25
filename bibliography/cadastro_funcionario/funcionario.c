#include <stdio.h>

#define TAM_DADOS 100
#define TAM_TEL 16
#define TAM_CPF 12
#define TAM_CEP 9
#define TAM_DATA 11

void cadastro_funcionario(){

    char nome[TAM_DADOS], cargo[TAM_DADOS], matricula[TAM_DADOS], email[TAM_DADOS], telefone[TAM_TEL], cpf[TAM_CPF],
        data_de_nascimento[TAM_DATA], cep[TAM_CEP], endereco[TAM_DADOS];
    
    printf("\n\tNome: ");
    fgets(nome, TAM_DADOS, stdin);
    fflush(stdin);

    printf("\n\tCargo: ");
    fgets(cargo, TAM_DADOS, stdin);
    fflush(stdin);

    printf("\n\tMatricula / Numero de iscricao: ");
    fgets(matricula, TAM_DADOS, stdin);
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

    FILE *clientes; 
    clientes = fopen("C:\\Users\\jhfcs\\Desktop\\CadStore\\data\\funcionarios.txt", "a");
    
    if(clientes == NULL){
        printf("\n\tERRO\n\tArquivo nao gerrado\n\n");
        return 1;
    }

    fprintf(clientes, "\n\nNome: %s\nCargo: %s\nMatricula / Numero de isncicao: %s\nEmail: %s\nTelefone: %s\nCPF: %s\nData de nascimento: %s\nCEP: %s\nEndereco: %s", 
        nome, cargo, matricula,email, telefone, cpf, data_de_nascimento, cep, endereco);

    printf("\n\tCliente cadastrado com sucesso\n");

}