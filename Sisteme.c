/*
Nome: Lucas Silva
Data:04/09/2024
objetivo: criar tela
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>


typedef struct {
    int idade;
    float salario;
    char sexo;
} Reg_dados;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tela() {
    int lin;
    system("cls");
    for (lin = 1; lin < 25; lin++) {
        gotoxy(1, lin);
        printf("|");
        gotoxy(79, lin);
        printf("|");
    }
    gotoxy(1, 1);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(1, 4);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(1, 22);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(1, 24);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(3, 2);
    printf("UNICV");
    gotoxy(60, 2);
    printf("Estrutura de Dados |");
    gotoxy(3, 3);
    printf("SISTEMA DE CADASTRO DE CLIENTES");
    gotoxy(66, 3);
    printf("Prof. Rodney");
    gotoxy(2, 23);
    printf("MSG");
}

void cadastrar(Reg_dados dados[], int *count) {
    int opcao; 
    do {
        tela();
        // Mostrar os dados a serem lidos na tela
        gotoxy(10, 10);
        printf("Digite sua idade..:");
        gotoxy(10, 12);
        printf("Digite seu salario:");
        gotoxy(10, 14);
        printf("Digite seu sexo...:");

        // Le e valida a digitacao da idade
        do {
            gotoxy(30, 10);
            printf("    ");
            gotoxy(30, 10);
            scanf("%d", &dados[*count].idade);
            if (dados[*count].idade < 18) {
                gotoxy(7, 23);
                printf("Idade Invalida. Tente Novamente.");
                getch();
                gotoxy(7, 23);
                printf("                                ");
            }
        } while (dados[*count].idade < 18);

        // Le e valida a digitacao do salario
        do {
            gotoxy(30, 12);
            printf("   ");
            gotoxy(30, 12);
            scanf("%f", &dados[*count].salario);
            if (dados[*count].salario < 2000) {
                gotoxy(7, 23);
                printf("Salario invalido. Tente novamente.");
                getch();
                gotoxy(7, 23);
                printf("                                  ");
            }
        } while (dados[*count].salario < 2000);

        // Le e valida a digitacao do sexo
        do {
            gotoxy(30, 14);
            printf("    ");
            gotoxy(30, 14);
            scanf(" %c", &dados[*count].sexo);  
            if (dados[*count].sexo != 'M' && dados[*count].sexo != 'F') {
                gotoxy(7, 23);
                printf("Sexo invalido. Tente novamente.");
                getch();
                gotoxy(7, 23);
                printf("                               ");
            }
        } while (dados[*count].sexo != 'M' && dados[*count].sexo != 'F');

        // Pergunta se o usuário deseja cadastrar outro ou não
        gotoxy(7, 23);
        printf("Deseja cadastrar outro 1=sim; 2=NAO.");
        scanf("%d", &opcao);
        (*count)++;
    } while (opcao == 1 && *count < 5);
}

void consultar(Reg_dados dados[], int count) {
    int i;
    tela();
    tela();
    for (i = 0; i < count; i++) {
        gotoxy(10, 5 + i * 2);
        printf("Idade: %d", dados[i].idade);
        gotoxy(30, 5 + i * 2);
        printf("Salario: %.2f", dados[i].salario);
        gotoxy(50, 5 + i * 2);
        printf("Sexo: %c", dados[i].sexo);
    }
    gotoxy(7, 23);
    printf("Pressione qualquer tecla para voltar...");
    getch();
}

int main() {
    Reg_dados dados[5];
    int opcao;
    int count = 0;
    do {
        system("cls");
        system("color 0A");

        tela();
        gotoxy(30, 10);
        printf("1. Cadastrar");
        gotoxy(30, 12);
        printf("2. Consultar");
        gotoxy(30, 14);
        printf("3. Sair");

        gotoxy(7, 23);
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            cadastrar(dados, &count);
            break;
        case 2:
            consultar(dados, count);
            break;
        case 3:
            gotoxy(07, 23);
            printf("Saindo...");
        default:
            break;
        
        }
    } while (opcao != 3);
    return 0;
}