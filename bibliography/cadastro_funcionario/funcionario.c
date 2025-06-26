#include <stdio.h>
#include <string.h>

#define TAM_DADOS 100
#define TAM_TEL 16
#define TAM_CPF 12
#define TAM_CEP 9
#define TAM_DATA 11

void cadastro_funcionario(){
    char nome[TAM_DADOS], cargo[TAM_DADOS], matricula[TAM_DADOS], email[TAM_DADOS], telefone[TAM_TEL], 
        cpf[TAM_CPF], data_de_nascimento[TAM_DATA], cep[TAM_CEP], endereco[TAM_DADOS];
    char nome_arquivo[150];

    printf("\n\tNome: ");
    fgets(nome, TAM_DADOS, stdin);
    fflush(stdin);

    printf("\tCargo: ");
    fgets(cargo, TAM_DADOS, stdin);
    fflush(stdin);

    printf("\tMatricula / Numero de inscricao: ");
    fgets(matricula, TAM_DADOS, stdin);
    fflush(stdin);

    printf("\tEmail: ");
    fgets(email, TAM_DADOS, stdin);
    fflush(stdin);

    printf("\tTelefone: ");
    fgets(telefone, TAM_TEL, stdin);
    fflush(stdin);

    printf("\tCPF (apenas numeros): ");
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

    cpf[strcspn(cpf, "\n")] = 0;

    snprintf(nome_arquivo, sizeof(nome_arquivo), "C:\\CadStore\\data\\funcionarios\\funcionario_%s.txt", cpf);

    FILE *funcionario = fopen(nome_arquivo, "w");
    if (funcionario == NULL){
        printf("\n\tERRO\n\tArquivo nao gerado\n\n");
        return;
    }

    fprintf(funcionario, "Nome: %s", nome);
    fprintf(funcionario, "Cargo: %s", cargo);
    fprintf(funcionario, "Matricula / Numero de inscricao: %s", matricula);
    fprintf(funcionario, "Email: %s", email);
    fprintf(funcionario, "Telefone: %s", telefone);
    fprintf(funcionario, "CPF: %s\n", cpf);
    fprintf(funcionario, "Data de nascimento: %s", data_de_nascimento);
    fprintf(funcionario, "CEP: %s", cep);
    fprintf(funcionario, "Endereco: %s", endereco);

    fclose(funcionario);

    printf("\n\tFuncionario cadastrado com sucesso em %s\n\n", nome_arquivo);
}