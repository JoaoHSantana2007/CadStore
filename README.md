# CadStore

![Terminal](https://badgen.net/badge/icon/terminal?icon=terminal&label)
[![Windows](https://badgen.net/badge/icon/windows?icon=windows&label)](https://microsoft.com/windows/)
[![GPLv3 license](https://img.shields.io/badge/License-GPLv3-blue.svg)](http://perso.crans.org/besson/LICENSE.html)

Projeto acadêmico desenvolvido para a disciplina LÓGICA PROGRAMAÇÃO E ALGORITMOS

Sistema de cadastro, pesquisa e edição de clientes e funcionários, desenvolvido para o projeto N2 do primeiro semestre da Universidade Católica de Brasília.

Programa feito em Linguagem C.

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

## Índice

- [Funcionalidades](#funcionalidades)
- [Pré-requisitos](#pré-requisitos)
- [Como Compilar](#como-compilar)
- [Como Executar](#como-executar)
- [Autores](#autores)
- [Licença](#licença)

## Funcionalidades

- **Cadastro** de clientes e funcionários.
- **Pesquisa** de clientes e funcionários por CPF.
- **Edição** de dados de clientes e funcionários.
- Armazenamento dos dados em arquivos `Cliente_CPFdocliente.txt` para clientes `funcionario_CPFdofuncionario.txt` para funcionário.

## Pré-requisitos

- [`GCC`](https://phoenixnap.com/kb/install-gcc-windows) instalado (compilador C) **O tuturial indicado é escrito em inglês**
- Sistema operacional **`Windows 10`** ou **`Windows 11`** 
- Terminal para execução do programa

## Como Compilar

1. Abra o terminal e execute o seguinte comando **2 vezes**.
```
cd ..
```
2. Ultilize o seguinte comando no terminal 
```
git clone https://github.com/JoaoHSantana2007/CadStore.git
```
5. Use este comando para acessar o diretorio 
```
cd .\CadStore\base\
```
4. Compile o projeto com:

```
gcc .\main.c C:\CadStore\bibliography\cadastro_cliente\cliente.c C:\CadStore\bibliography\cadastro_funcionario\funcionario.c C:\CadStore\bibliography\Edit_cliente\Edit_C.c C:\CadStore\bibliography\Edit_funcionario\Edit_F.c C:\CadStore\bibliography\pesquisa_cliente\pesquisa_C.c C:\CadStore\bibliography\pesquisa_funcionario\pesquisa_F.c -o cadstore
```

## Como Executar

1. Ultilize dentre os comandos aprezentados baseado no que precisar:

- Efetuar o cadastro de cliente
```
./cadstore.exe 1 1   
```
- Efetuar o cadastro de funcionário
```
./cadstore.exe 1 2   
```
- Pesquisar pelo cadastro de cliente
```
./cadstore.exe 2 1   
```
- Pesquisar pelo cadastro de funcionário
```
./cadstore.exe 2 2   
```
- Editar cadastro de cliente
```
./cadstore.exe 3 1   
```
- Editar cadastro de funcionário
```
./cadstore.exe 3 2   
```

## Autores

- João Henrique Faria De Castro Santana
[![GitHub](https://badgen.net/badge/icon/github?icon=github&label)](https://github.com/JoaoHSantana2007)
- Filipi Leite Ramos 
[![GitHub](https://badgen.net/badge/icon/github?icon=github&label)](https://github.com/Felps-26)
- João Guilherme Tanan Macedo de Medeiros
[![GitHub](https://badgen.net/badge/icon/github?icon=github&label)](https://github.com/joaotanan)
- Ítalo George da Costa Diniz
[![GitHub](https://badgen.net/badge/icon/github?icon=github&label)](https://github.com/Diniz018)




## Licença

Este projeto está licenciado sob a [GNU GPL v3](LICENSE).