#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 3

int Codigo[TAM], Estoque[TAM], Vendido[TAM],i,j,Opcao, tes=1, Aux=0,AuxMenu, flagCad=0,flagBusca=0, AuxBusca, Count,x,y,AuxInt;
float PrecoCusto[TAM], PrecoVenda[TAM], TotalDinheiroCompra,TotalDinheiroVenda,Lucro,AuxFloat;
//char Nome[TAM][100];
char *Nome[TAM],*AuxName[TAM];

int main()
{
    setlocale(LC_ALL, "Portuguese");
    PrincipalMenu();
}
//Verifica se o ID e igual a algum j� cadastrado
bool Valor(int Codigo1)
{
   bool flag = false;

    for(j=0;j<TAM;j++)
    {
        if(Codigo[j] == Codigo1)
        {
            flag = true;
            printf("O c�digo %i j� foi utilizado, digite outro! \n", Codigo[j]);
        }
    }
    return flag;
}

int Logica(int Opcao){
    switch(Opcao)
    {
        case 1:
            //Cadatrar
            system("cls");
            for(i=0;i<TAM;i++)
            {
                do{
                    printf("Digite o c�digo do produto: \n");
                     scanf("%i",&Aux);
                    }
                    while(Valor(Aux));
                    Codigo[i]=Aux;

                fflush(stdin);
                printf("Digite o nome do produto: \n");
                //scanf("%[^\n]s", Nome[i]);
                scanf("%[^\n]s",&Nome[i]);
                fflush(stdin);

                printf("Digite a quantidade em estoque: \n");
                scanf("%i",&Estoque[i]);

                printf("Digite a quantidade vendida: \n");
                scanf("%i",&Vendido[i]);

                printf("Digite o pre�o de venda: \n");
                scanf("%f",&PrecoVenda[i]);
                fflush(stdin);

                printf("Digite o pre�o de custo: \n");
                scanf("%f",&PrecoCusto[i]);
                fflush(stdin);
                printf("------------------------------\n");
            }
            flagCad = 1;
            printf("Todos os produtos foram cadastrados com sucesso!\n");
            printf("Deseja voltar ao menu principal?(1 = sim / 2 = n�o) \n");
            scanf("%i",&AuxMenu);
            VoltarMenu(AuxMenu);
            break;

        case 2:
            //Alterar
            system("cls");

            printf("Digite o ID do produto  que deseja alterar:\n");
            scanf("%i",&AuxBusca);

            for(i=0;i<TAM;i++)
            {
                if(Codigo[i]==AuxBusca)
                {
                    printf("Digite a quantidade em estoque: \n");
                    scanf("%i",&Estoque[i]);

                    printf("Digite o pre�o de venda: \n");
                    scanf("%f",&PrecoVenda[i]);
                    fflush(stdin);

                    flagBusca = 1;

                    printf("Produto alterado com sucesso!!!.\n\n");
                    printf("Deseja voltar ao menu principal?(1 = sim / 2 = n�o) \n");
                    scanf("%i",&AuxMenu);
                    VoltarMenu(AuxMenu);
                }
            }
              if(flagBusca==0)
                {
                    printf("N�o foi encontrato nenhum produto com esse ID.\n\n");
                    printf("Deseja voltar ao menu principal?(1 = sim / 2 = n�o) \n");
                    scanf("%i",&AuxMenu);
                    VoltarMenu(AuxMenu);
                }
            break;

        case 3:
            //Excluir
            system("cls");

            printf("Digite o ID do produto  que deseja excluir:\n");
            scanf("%i",&AuxBusca);

            for(i=0;i<TAM;i++)
            {
                if(Codigo[i]==AuxBusca)
                {
                    Codigo[i] = 0;
                    Nome[i] = '0';
                    Vendido[i] = 0;
                    Estoque[i] = 0;
                    PrecoVenda[i] = 0;
                    PrecoCusto[i] = 0;

                    flagBusca = 1;
                    printf("\n");
                    printf("Produto excluido com sucesso.\n\n");
                    printf("Deseja voltar ao menu principal?(1 = sim / 2 = n�o) \n");
                    scanf("%i",&AuxMenu);
                    VoltarMenu(AuxMenu);
                }
            }
              if(flagBusca==0)
                {
                    printf("N�o foi encontrato nenhum produto com esse ID.\n\n");
                    printf("Deseja voltar ao menu principal?(1 = sim / 2 = n�o) \n");
                    scanf("%i",&AuxMenu);
                    VoltarMenu(AuxMenu);
                }

        case 4:
            //Ordena os valores
            system("cls");
            for(x=0;x<TAM;x++)
                {
                  for(y=0;y<TAM;y++)
                  {
                      if(Codigo[y]>Codigo[y+1])
                      {
                          AuxInt = Codigo[y];
                          Codigo[y] = Codigo[y+1];
                          Codigo[y+1] = AuxInt;

                      }
                    }
                 }

            if(flagCad != 0)
            {


                //Exibir todos
                for(i=0;i<TAM;i++)
                {
                    printf("ID: %i\n",Codigo[i]);
                    printf("Nome: %s\n",&Nome[i]);
                    printf("Estoque: %i\n",Estoque[i]);
                    printf("Vendido: %i\n",Vendido[i]);
                    printf("Pre�o de custo: %.2f\n",PrecoCusto[i]);
                    printf("Preco de Venda: %.2f\n",PrecoVenda[i]);

                    TotalDinheiroCompra=Vendido[i]*PrecoCusto[i];
                    TotalDinheiroVenda=Vendido[i]*PrecoVenda[i];
                    Lucro = TotalDinheiroVenda-TotalDinheiroCompra;
                    printf("Lucro: %.2f\n",Lucro);

                    printf("------------------------------\n");
                    }
                }
                printf("");
                printf("Deseja voltar ao menu principal?(1 = sim / 2 = n�o) \n");
                scanf("%i",&AuxMenu);
                VoltarMenu(AuxMenu);
            }
            else
            {
                printf("Voc� precisa cadastrar produtos!!!\n\n");
                printf("Deseja voltar ao menu principal?(1 = sim / 2 = n�o) \n");
                scanf("%i",&AuxMenu);
                VoltarMenu(AuxMenu);
            }

        case 5:
            //Consultar por ID
            system("cls");
            printf("Digite o c�digo do produto\n");
            scanf("%i",&AuxBusca);
            for(i=0;i<TAM;i++)
            {
                if(Codigo[i]==AuxBusca)
                {
                    printf("------------------------------\n");
                    printf("ID: %i\n",Codigo[i]);
                    printf("Nome: %s\n",&Nome[i]);
                    //printf("Nome: %s\n",Nome[i]);
                    printf("Estoque: %i\n",Estoque[i]);
                    printf("Vendido: %i\n",Vendido[i]);
                    printf("Pre�o de custo: %.2f\n",PrecoCusto[i]);
                    printf("Preco de Venda: %.2f\n",PrecoVenda[i]);

                    TotalDinheiroCompra=Vendido[i]*PrecoCusto[i];
                    TotalDinheiroVenda=Vendido[i]*PrecoVenda[i];
                    Lucro = TotalDinheiroVenda-TotalDinheiroCompra;
                    printf("Lucro: %.2f\n",Lucro);
                    printf("------------------------------\n");
                    flagBusca = 1;

                    printf("Deseja voltar ao menu principal?(1 = sim / 2 = n�o) \n");
                    scanf("%i",&AuxMenu);
                    VoltarMenu(AuxMenu);
                }
            }
            if(flagBusca==0)
            {
                printf("N�o foi encontrato nenhum produto com esse ID.\n\n");
                printf("Deseja voltar ao menu principal?(1 = sim / 2 = n�o) \n");
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

//Fun��o respons�vel por iniciar o menu.
  int PrincipalMenu(){

    printf("---------------->CAD PRODUTO<---------------- \n");
    printf("1 - Cadastrar produtos \n");
    printf("2 - Alterar produto \n");
    printf("3 - Excluir produto \n");
    printf("---------------->RELAT�RIOS<-----------------\n");
    printf("4 - Consultar todos os produtos\n");
    printf("5 - Consultar por ID\n\n");
    printf("6 - Sair \n");
    scanf("%i",&Opcao);
    Logica(Opcao);
    return Opcao;
    }

    int VoltarMenu(int AuxMenu){

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


