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
            }
            break;
        case 3:
            char nome[100];
            int encontrado = 0;

            printf("\n> Insira o nome do cliente que deseja excluir:");
            scanf(" %[^\n]s", nome);

            for (int i = 0; i < numero_de_clientes; i++)
            {
                if (strcmp(cadastrados[i].nome, nome) == 0)
                {
                    printf("> Cliente identificado.\n");
                    for (int j = 0; j < numero_de_clientes - 1; j++)
                    {
                        cadastrados[j] = cadastrados[j + 1];
                    }
                    
                    encontrado = 1;
                    numero_de_clientes--;
                    printf("> Cliente excluído com sucesso!\n");
                }                
            }

            if (encontrado == 0)
            {
                printf("\n> Cliente não identificado no sistema.\n");
            }
            break;

        case 4:

            break;
        default:
            break;
        }

    } while (opcao != 5);

    return 0;
}