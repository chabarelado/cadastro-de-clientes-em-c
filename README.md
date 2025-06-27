# 📋 Sistema de Cadastro de Clientes em C

Este projeto é um sistema simples de cadastro de clientes feito em linguagem C. Ele permite cadastrar, consultar, alterar e excluir dados de clientes por meio de um menu interativo no terminal.

## 📌 Funcionalidades

- ✅ Cadastrar novo cliente
- 🔍 Consultar todos os clientes cadastrados
- ✏️ Alterar dados de um cliente
- ❌ Excluir cliente do sistema
- 🚪 Sair do programa

## 🧱 Estrutura do Cliente

Cada cliente possui os seguintes dados:

- **Nome** (até 100 caracteres)
- **Email** (até 100 caracteres)
- **Idade** (inteiro)

## 🖥️ Como funciona

O sistema funciona em modo terminal e utiliza um vetor de estruturas (`struct`) para armazenar até 100 clientes.

O menu principal oferece cinco opções:

1. **Consultar clientes cadastrados**
2. **Cadastrar novo cliente**
3. **Excluir cadastro de cliente**
4. **Alterar dados de cadastro**
5. **Sair do programa**

## ▶️ Como compilar e executar

Use um compilador como `gcc`. No terminal:

```bash
gcc -o cadastro clientes.c
./cadastro

    Substitua clientes.c pelo nome do seu arquivo, se diferente.

📌 Exemplo de uso

> Sistema de cadastro

> Selecione uma opção abaixo:
 1-Consular clientes cadastrados.
 2-Cadastrar novo cliente.
 3-Excluir cadastro de cliente.
 4-Alterar dados de cadastro.
 5-Sair do programa.
> Opção desejada: 2

> Insira os dados do cliente.
> Nome: João da Silva
> Email: joao@email.com
> Idade: 30

> Cliente cadastrado com sucesso.
