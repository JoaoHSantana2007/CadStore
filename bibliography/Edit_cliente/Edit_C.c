#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_DADOS 100
#define TAM_TEL 16
#define TAM_CPF 12
#define TAM_CEP 9
#define TAM_DATA 11

void edit_cliente(){
    char cpf[TAM_CPF];
    char nome_arquivo[150];
    char buffer[1000];

    printf("\n\tDigite o CPF do cliente que deseja editar: ");
    fgets(cpf, TAM_CPF, stdin);
    cpf[strcspn(cpf, "\n")] = 0;

    snprintf(nome_arquivo, sizeof(nome_arquivo), "C:\\Users\\jhfcs\\Desktop\\CadStore\\data\\cliente_%s.txt", cpf);

    // Verifica se o arquivo existe
    FILE *arquivo = fopen(nome_arquivo, "r");
    if(arquivo == NULL){
        printf("\n\tCliente com CPF %s não encontrado.\n", cpf);
        return;
    }
    fclose(arquivo);

    // Mostra os dados atuais
    printf("\n\tDados atuais do cliente:\n");
    arquivo = fopen(nome_arquivo, "r");
    while(fgets(buffer, sizeof(buffer), arquivo) != NULL){
        printf("\t%s", buffer);
    }
    fclose(arquivo);

    // Solicita novos dados
    char nome[TAM_DADOS], email[TAM_DADOS], telefone[TAM_TEL], data_de_nascimento[TAM_DATA], cep[TAM_CEP], endereco[TAM_DADOS];

    printf("\n\tDigite os novos dados:\n");
    
    printf("\n\tNome: ");
    fgets(nome, TAM_DADOS, stdin);

    printf("\tEmail: ");
    fgets(email, TAM_DADOS, stdin);

    printf("\tTelefone: ");
    fgets(telefone, TAM_TEL, stdin);

    printf("\tData de nascimento: ");
    fgets(data_de_nascimento, TAM_DATA, stdin);

    printf("\tCEP: ");
    fgets(cep, TAM_CEP, stdin);

    printf("\tEndereco: ");
    fgets(endereco, TAM_DADOS, stdin);

    // Atualiza o arquivo
    arquivo = fopen(nome_arquivo, "w");
    if(arquivo == NULL){
        printf("\n\tERRO\n\tFalha ao atualizar o arquivo\n\n");
        return;
    }

    fprintf(arquivo, "Nome: %sEmail: %sTelefone: %sCPF: %s\nData de nascimento: %sCEP: %sEndereco: %s", nome, email, telefone, cpf, data_de_nascimento, cep, endereco);

    fclose(arquivo);
    printf("\n\tCadastro atualizado com sucesso!\n");
}
int main() {
    edit_cliente();
    return 0;
}