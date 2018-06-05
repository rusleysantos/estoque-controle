#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 3

int Codigo[TAM], Estoque[TAM], Vendido[TAM],i,j,Opcao, tes=1, Aux,AuxMenu;
float PrecoCusto[TAM], PrecoVenda[TAM];
char Nome[TAM][100];

int main(){
    setlocale(LC_ALL, "");
    PrincipalMenu();
}

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
            system("cls");
            for(i=0;i<=TAM;i++)
            {
                do{
                    printf("Digite o código do produto: \n");
                     scanf("%i",&Aux);
                    }
                    while(Valor(Aux));
                   Codigo[i]=Aux;
                printf("");
                printf("Digite o nome do produto: \n");
                scanf("%s",&Nome[i][100]);
                printf("");
                printf("Digite a quantidade em estoque: \n");
                scanf("%i",&Estoque[i]);
                printf("");
                printf("Digite a quantidade vendida: \n");
                scanf("%i",&Vendido[i]);
                printf("------------------------------\n");
            }
            printf("Todos os produtos foram cadastrados com sucesso!\n");
            printf("Deseja voltar ao menu principal?(1 = sim / 2 = não) \n");
            scanf("%i",&AuxMenu);
            VoltarMenu(AuxMenu);
            break;

        case 2:
            system("cls");
            //logica
            break;

        case 3:
            system("cls");
            //logica

        case 4:
            system("cls");
            //logica

        case 5:
            system("cls");
            //logica

        case 6:
            system("cls");
            //logica

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
