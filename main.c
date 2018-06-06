#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define TAM 1

int Codigo[TAM], Estoque[TAM], Vendido[TAM],i,j,Opcao, tes=1, Aux=0,AuxMenu, flagCad=0,flagBusca=0, AuxBusca;
float PrecoCusto[TAM], PrecoVenda[TAM];
char Nome[TAM][100];

int main()
{
    setlocale(LC_ALL, "");
    PrincipalMenu();
}
//Verifica se o ID e igual a algum já cadastrado
bool Valor(int Codigo1)
{
   bool flag = false;

    for(j=0;j<TAM;j++)
    {
        if(Codigo[j] == Codigo1)
        {
            flag = true;
            printf("O código %i já foi utilizado, digite outro! \n", Codigo[j]);
        }
    }
    return flag;
}

int Logica(Opcao){
    switch(Opcao)
    {
        case 1:
            //Cadatrar
            system("cls");
            for(i=0;i<=TAM;i++)
            {
                do{
                    printf("Digite o código do produto: \n");
                     scanf("%i",&Aux);
                    }
                    while(Valor(Aux));
                    Codigo[i]=Aux;

                printf("Digite o nome do produto: \n");
                scanf("%s",&Nome[i][100]);
                fflush(stdin);

                printf("Digite a quantidade em estoque: \n");
                scanf("%i",&Estoque[i]);

                printf("Digite a quantidade vendida: \n");
                scanf("%i",&Vendido[i]);

                printf("Digite o preço de venda: \n");
                scanf("%f",&PrecoVenda[i]);
                fflush(stdin);
                printf("%f",PrecoVenda[i]);

                printf("Digite o preço de custo: \n");
                scanf("%f",&PrecoCusto[i]);
                fflush(stdin);


                printf("------------------------------\n");
            }
            flagCad = 1;
            printf("Todos os produtos foram cadastrados com sucesso!\n");
            printf("Deseja voltar ao menu principal?(1 = sim / 2 = não) \n");
            scanf("%i",&AuxMenu);
            VoltarMenu(AuxMenu);
            break;

        case 2:
            //Alterar
            system("cls");

            printf("Digite o ID do produto  que deseja alterar:\n");
            scanf("%i",&AuxBusca);

            for(i=0;i<=TAM;i++)
            {
                if(Codigo[i]==AuxBusca)
                {
                    printf("Digite a quantidade em estoque: \n");
                    scanf("%i",&Estoque[i]);

                    printf("Digite o preço de venda: \n");
                    scanf("%f",&PrecoVenda[i]);
                    fflush(stdin);

                    flagBusca = 1;

                    printf("Deseja voltar ao menu principal?(1 = sim / 2 = não) \n");
                    scanf("%i",&AuxMenu);
                    VoltarMenu(AuxMenu);
                }
            }
              if(flagBusca==0)
                {
                    printf("Não foi encontrato nenhum produto com esse ID.\n");
                    printf("");
                    printf("Deseja voltar ao menu principal?(1 = sim / 2 = não) \n");
                    scanf("%i",&AuxMenu);
                    VoltarMenu(AuxMenu);
                }
            break;

        case 3:
            system("cls");
            //logica

        case 4:
            //Exibir todos
            system("cls");
            if(flagCad != 0)
            {
                for(i=0;i<=TAM;i++)
                {
                printf("ID: %i\n",Codigo[i]);
                printf("Nome: %s\n",&Nome[i][100]);
                printf("Estoque: %i\n",Estoque[i]);
                printf("Vendido: %i\n",Vendido[i]);
                printf("Preço de custo: %.2f\n",PrecoVenda[i]);
                printf("Preco de Venda: %.2f\n",PrecoCusto[i]);
                printf("------------------------------\n");
                }
                printf("");
                printf("Deseja voltar ao menu principal?(1 = sim / 2 = não) \n");
                scanf("%i",&AuxMenu);
                VoltarMenu(AuxMenu);
            }
            else
            {
                printf("Você precisa cadastrar produtos!!!\n");
                printf("");
                printf("Deseja voltar ao menu principal?(1 = sim / 2 = não) \n");
                scanf("%i",&AuxMenu);
                VoltarMenu(AuxMenu);
            }

        case 5:
            //Consultar por ID
            system("cls");
            printf("Digite o código do produto\n");
            scanf("%i",&AuxBusca);
            for(i=0;i<=TAM;i++)
            {
                if(Codigo[i]==AuxBusca)
                {
                    printf("------------------------------\n");
                    printf("ID: %i\n",Codigo[i]);
                    printf("Nome: %s\n",&Nome[i][100]);
                    printf("Estoque: %i\n",Estoque[i]);
                    printf("Vendido: %i\n",Vendido[i]);
                    printf("------------------------------\n");
                    flagBusca = 1;

                    printf("Deseja voltar ao menu principal?(1 = sim / 2 = não) \n");
                    scanf("%i",&AuxMenu);
                    VoltarMenu(AuxMenu);
                }
            }
            if(flagBusca==0)
            {
                printf("Não foi encontrato nenhum produto com esse ID.\n");
                printf("");
                printf("Deseja voltar ao menu principal?(1 = sim / 2 = não) \n");
                scanf("%i",&AuxMenu);
                VoltarMenu(AuxMenu);
            }
            break;
        case 6:
            exit(0);
            break;
        default:
            exit(0);
            break;
        }
    }

//Função responsável por iniciar o menu.
  int PrincipalMenu(){

    printf(">>>>>>>>>>>>>ESCOLHA SUA OPÇÃO<<<<<<<<<<<<<<< \n");
    printf("1 - Cadastrar produtos \n");
    printf("2 - Alterar produto \n");
    printf("3 - Excluir produto \n");
    printf("---------------|RELATÓRIOS|---------------\n");
    printf("4 - Consultar todos os produtos\n");
    printf("5 - Consultar por ID\n");
    printf("");
    printf("6 - Sair \n");
    scanf("%i",&Opcao);
    Logica(Opcao);
    return Opcao;
    }

    int VoltarMenu(AuxMenu){

        switch(AuxMenu)
        {
        case 1:
            system("cls");
            PrincipalMenu();
            break;
        case 2:
            exit(0);
            break;
        default:
            exit(0);
            break;

        }
    }


