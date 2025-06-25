#include <stdio.h>
#include <string.h>

#define TAM_DADOS 100
#define TAM_TEL 16
#define TAM_CPF 12
#define TAM_CEP 9
#define TAM_DATA 11

void cadastro_funcionario(){
    char nome[TAM_DADOS], cargo[TAM_DADOS], matricula[TAM_DADOS], email[TAM_DADOS], telefone[TAM_TEL], cpf[TAM_CPF], data_de_nascimento[TAM_DATA], cep[TAM_CEP], endereco[TAM_DADOS];
    char nome_arquivo[150];

    printf("\n\tNome: ");
    fgets(nome, TAM_DADOS, stdin);

    printf("\n\tCargo: ");
    fgets(cargo, TAM_DADOS, stdin);

    printf("\n\tMatricula / Numero de inscricao: ");
    fgets(matricula, TAM_DADOS, stdin);

    printf("\tEmail: ");
    fgets(email, TAM_DADOS, stdin);

    printf("\tTelefone: ");
    fgets(telefone, TAM_TEL, stdin);

    printf("\tCPF (apenas números): ");
    fgets(cpf, TAM_CPF, stdin);

    printf("\tData de nascimento: ");
    fgets(data_de_nascimento, TAM_DATA, stdin);

    printf("\tCEP: ");
    fgets(cep, TAM_CEP, stdin);

    printf("\tEndereco: ");
    fgets(endereco, TAM_DADOS, stdin);

    // Remove o \n do CPF para montar o nome do arquivo corretamente
    cpf[strcspn(cpf, "\n")] = 0;

    // Monta o nome do arquivo, ex: funcionario_12345678901.txt
    snprintf(nome_arquivo, sizeof(nome_arquivo), "funcionario_%s.txt", cpf);

    FILE *funcionario = fopen(nome_arquivo, "w");
    if (funcionario == NULL){
        printf("\n\tERRO\n\tArquivo não gerado\n\n");
        return;
    }

    fprintf(funcionario,
        "Nome: %sCargo: %sMatricula / Numero de inscricao: %sEmail: %sTelefone: %sCPF: %s\nData de nascimento: %sCEP: %sEndereco: %s", nome, cargo, matricula, email, telefone, cpf, data_de_nascimento, cep, endereco);

    fclose(funcionario);

    printf("\n\tFuncionario cadastrado com sucesso em %s\n", nome_arquivo);
}

int main(){
    cadastro_funcionario();
    return 0;
}