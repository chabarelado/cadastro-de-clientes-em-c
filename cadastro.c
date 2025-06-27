#include <stdio.h>
#include <string.h>

struct cliente
{
    char nome[100];
    char email[100];
    int idade;
};

typedef struct cliente cliente;

int main() {
    cliente cadastrados[100];
    int numero_de_clientes = 0;
    int opcao;
    
    printf("\n> Sistema de cadastro\n");
    do
    {
        do
        {
            printf("\n> Selecione uma opção abaixo:\n");
            printf(" 1-Consular clientes cadastrados.\n");
            printf(" 2-Cadastrar novo cliente.\n");
            printf(" 3-Excluir cadastro de cliente.\n");
            printf(" 4-Alterar dados de cadastro.\n");
            printf(" 5-Sair do programa.\n");
            printf("> Opção desejada:");
            scanf("%d", &opcao);

            if (opcao < 1 || opcao > 5)
            {
                printf("\n> Digite uma opção válida de 1 a 5!\n");
            }

            while (getchar() != '\n' && getchar() != EOF);

        } while (opcao < 1 || opcao > 5);

        switch (opcao)
        {
        case 1:

            if (numero_de_clientes == 0)
            {
                printf("\n> Nenhum cadastro identificado.\n");
            }

            else {
                for (int i = 0; i < numero_de_clientes; i++)
                {
                    printf("\n------------------\n");
                    printf("> Cliente número %d\n", i + 1);
                    printf("> Nome: %s\n", cadastrados[i].nome);
                    printf("> Email: %s\n", cadastrados[i].email);
                    printf("> Idade: %d\n", cadastrados[i].idade);
                }
            }
            break;
        case 2:
            if (numero_de_clientes >= 100)
            {
                printf("\n> Atenção!!! Número máximo de clientes cadastrados!!!\n");
            }
            
            else {
                printf("\n> Insira os dados do cliente.\n");
                printf("> Nome:");
                scanf(" %[^\n]s", cadastrados[numero_de_clientes].nome);
                printf("> Email:");
                scanf(" %[^\n]s", cadastrados[numero_de_clientes].email);
                printf("> Idade:");
                scanf("%d", &cadastrados[numero_de_clientes].idade);
                numero_de_clientes++;

                printf("\n> Cliente cadastrado com sucesso.\n");
            }
            break;
        case 3:
            char nome[100];
            int cliente_encontrado = 0;
            int confirmacao = 0;

            printf("\n> Insira o nome do cliente que deseja excluir:");
            scanf(" %[^\n]s", nome);

            for (int i = 0; i < numero_de_clientes; i++)
            {
                if (strcmp(cadastrados[i].nome, nome) == 0)
                {
                    printf("\n> Cliente identificado <\n");

                    printf("\n> Deseja realizar a exclusão?\n> Digite 1 para confirmar e 0 para voltar ao menu:");
                    scanf("%d",&confirmacao);

                    if (confirmacao == 1)
                    {
                        for (int j = 0; j < numero_de_clientes - 1; j++)
                        {
                            cadastrados[j] = cadastrados[j + 1];
                        }
                        
                        cliente_encontrado = 1;
                        numero_de_clientes--;
                        printf("\n> Cliente excluído com sucesso! <\n");
                    }
                    else {
                        cliente_encontrado = 1;
                        continue;
                    }
                }                
            }

            if (cliente_encontrado == 0)
            {
                printf("\n> Cliente não identificado no sistema. <\n");
            }
            break;      
        case 4:
            char nome_alteracao[100];
            int cliente_encontrado2 = 0;

            printf("\n> Insira o nome do cliente que deseja alterar:");
            scanf(" %[^\n]s", nome_alteracao);

            for (int i = 0; i < numero_de_clientes; i++)
            {
                if (strcmp(cadastrados[i].nome, nome_alteracao) == 0)
                {
                    printf("\n> Cliente identificado.\n");

                    printf("\n> Insira o novo nome:");
                    scanf(" %[^\n]s", cadastrados[i].nome);

                    printf("> Insira o novo email:");
                    scanf(" %[^\n]s", cadastrados[i]. email);

                    printf("> Insira a idade atualizada:");
                    scanf("%d", &cadastrados[i].idade);

                    cliente_encontrado2 = 1;
                }   
            }
            
            if (cliente_encontrado2 == 1) {
                printf("\n> Cadastro atualizado com sucesso.\n");
            } 

            else {
                printf("\n> Cliente não identificado no sistema.\n");
            }
            break;
        case 5:
            printf("\n> Encerrando o programa...");
            break;
        default:
            printf("\n> Digite uma opção válida!!!");
            break;
        }

    } while (opcao != 5);

    return 0;
}