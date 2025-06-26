#include <stdio.h>

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
                    printf("> Cliente número %d\n", i);
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
                fgets(cadastrados[numero_de_clientes].nome, 100, stdin);
                printf("> Email:");
                fgets(cadastrados[numero_de_clientes].nome, 100, stdin); 
                scanf("%d", &cadastrados[numero_de_clientes].idade);

                numero_de_clientes++;
            }
            break;
        case 3:

        
            break;

        case 4:

            break;
        default:
            break;
        }

    } while (opcao != 5);

    return 0;
}