#include <stdio.h>
#include <string.h>

#define TAM_DADOS 100
#define TAM_TEL 16
#define TAM_CPF 12
#define TAM_CEP 9
#define TAM_DATA 11

void edit_funcionario(){
    char cpf[TAM_CPF];
    char nome_arquivo[150];
    char buffer[1000];

    printf("\n\tDigite o CPF do funcionario que deseja editar: ");
    fgets(cpf, TAM_CPF, stdin);
    cpf[strcspn(cpf, "\n")] = 0;

    snprintf(nome_arquivo, sizeof(nome_arquivo), "C:\\CadStore\\data\\funcionarios\\funcionario_%s.txt", cpf);

    FILE *arquivo = fopen(nome_arquivo, "r");
    if(arquivo == NULL){
        printf("\n\tFuncionario com CPF %s nao encontrado.\n", cpf);
        return;
    }
    fclose(arquivo);

    printf("\n\tDados atuais do funcionario:\n");
    arquivo = fopen(nome_arquivo, "r");
    while(fgets(buffer, sizeof(buffer), arquivo) != NULL){
        printf("\t%s", buffer);
    }
    fclose(arquivo);

    char nome[TAM_DADOS], cargo[TAM_DADOS], matricula[TAM_DADOS], email[TAM_DADOS], telefone[TAM_TEL], data_de_nascimento[TAM_DATA], cep[TAM_CEP], endereco[TAM_DADOS];

    printf("\n\tDigite os novos dados:\n");
    fflush(stdin);

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

    printf("\tData de nascimento: ");
    fgets(data_de_nascimento, TAM_DATA, stdin);
    fflush(stdin);

    printf("\tCEP: ");
    fgets(cep, TAM_CEP, stdin);
    fflush(stdin);

    printf("\tEndereco: ");
    fgets(endereco, TAM_DADOS, stdin);
    fflush(stdin);

    arquivo = fopen(nome_arquivo, "w");
    if(arquivo == NULL){
        printf("\n\tERRO\n\tFalha ao atualizar o arquivo\n\n");
        return;
    }

    fprintf(arquivo, "Nome: %s", nome);
    fprintf(arquivo, "Cargo: %s", cargo);
    fprintf(arquivo, "Matricula / Numero de inscricao: %s", matricula);
    fprintf(arquivo, "Email: %s", email);
    fprintf(arquivo, "Telefone: %s", telefone);
    fprintf(arquivo, "CPF: %s\n", cpf);
    fprintf(arquivo, "Data de nascimento: %s", data_de_nascimento);
    fprintf(arquivo, "CEP: %s", cep);
    fprintf(arquivo, "Endereco: %s", endereco);

    fclose(arquivo);
    printf("\n\tCadastro do funcionario atualizado com sucesso!\n\n");
}
