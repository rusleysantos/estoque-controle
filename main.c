#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int Codigo[TAM], Estoque[TAM], Vendido[TAM],i,Opcao;
float PrecoCusto[TAM], PrecoVenda[TAM];

int main(){
    setlocale(LC_ALL, "");
    PrincipalMenu();
}

int Logica(Opcao){
    switch(Opcao)
    {
        case 1:
            system("cls");
            //logica
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

//Fun��o respons�vel por iniciar o menu.
  int PrincipalMenu(){

    printf(">>>>>>>>>>>>>ESCOLHA SUA OP��O<<<<<<<<<<<<<<< \n");
    printf("1 - Cadastrar produtos \n");
    printf("2 - Alterar produto \n");
    printf("3 - Excluir produto \n");
    printf("---------------|RELAT�RIOS|---------------\n");
    printf("4 - Consultar todos os produtos\n");
    printf("5 - Consultar por ID\n");
    printf("");
    printf("6 - Sair \n");
    scanf("%i",&Opcao);
    Logica(Opcao);
    return Opcao;
    }
