#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;

    do{
        system("cls");
        printf("\nDigite 1 para conhecer as REGRAS.\n\nDigite 2 para jogar.\n\n\nOpcao escolhida: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                regras();
            break;
            case 2:
                jogodavelha();
            break;
    }
    }while(opcao!=1 && opcao!=2);
    return 0;
}
int regras(){
    int menu;
    system("cls");
    printf("\nCada numero sera uma posicao:\n");
    printf("|-----------|\n| 7 | 8 | 9 |\n|-----------|\n| 4 | 5 | 6 |\n|-----------|\n| 1 | 2 | 3 |\n|-----------|");
    printf("\nDigite 1 para voltar ao MENU.\n");
    scanf("%d", &menu);
    switch(menu){
        case 1:
            main();
    }
}

int jogodavelha(){
    char matriz[3][3]={'-','-','-','-','-','-','-','-','-'};
    int escolha=1;
    char x='x', o= 'o';
    int jogada;
    int ganhador=0;

    do{
        if(escolha%2==0){
            x='x';
        }else x='o';
        system("cls");
        printf("|-----------|\n| %c | %c | %c |\n|-----------|\n| %c | %c | %c |\n|-----------|\n| %c | %c | %c |\n|-----------|", matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2]);
        printf("\nDigite a posicao que queira jogar: ");
        scanf("%d", &jogada);
        switch(jogada){
            case 1:
                matriz[2][0]= x;
            break;

            case 2:
                matriz[2][1]= x;
            break;

            case 3:
                matriz[2][2]= x;
            break;

            case 4:
                matriz[1][0]= x;
            break;

            case 5:
                matriz[1][1]= x;
            break;

            case 6:
                matriz[1][2]= x;
            break;

            case 7:
                matriz[0][0]= x;
            break;

            case 8:
                matriz[0][1]= x;
            break;
            case 9:
                matriz[0][2]= x;
            break;
        }
        if((matriz[0][0]=='x' && matriz[1][0]=='x' && matriz[2][0]=='x')  || (matriz[0][1]=='x' && matriz[1][1]=='x' && matriz[2][1]=='x') || (matriz[0][2]=='x' && matriz[1][2]=='x' && matriz[2][2]=='x')  || (matriz[0][0]=='x' && matriz[0][1]=='x' && matriz[0][2]=='x') || (matriz[1][0]=='x' && matriz[1][1]=='x' && matriz[1][2]=='x') || (matriz[2][0]=='x' && matriz[2][1]=='x' && matriz[2][2]=='x') || (matriz[0][0]=='x' && matriz[1][1]=='x' && matriz[2][2]=='x') || (matriz[0][2]=='x' && matriz[1][1]=='x' && matriz[2][0]=='x') ){
            ganhador=2;
            escolha=10;
        }else if((matriz[0][0]=='o' && matriz[1][0]=='o' && matriz[2][0]=='o')  || (matriz[0][1]=='o' && matriz[1][1]=='o' && matriz[2][1]=='o') || (matriz[0][2]=='o' && matriz[1][2]=='o' && matriz[2][2]=='o') || (matriz[0][0]=='o' && matriz[0][1]=='o' && matriz[0][2]=='o') || (matriz[1][0]=='o' && matriz[1][1]=='o' && matriz[1][2]=='o') || (matriz[2][0]=='o' && matriz[2][1]=='o' && matriz[2][2]=='o') || (matriz[0][0]=='o' && matriz[1][1]=='o' && matriz[2][2]=='o') || (matriz[0][2]=='o' && matriz[1][1]=='o' && matriz[2][0]=='o')){
            ganhador=1;
            escolha=10;
        }
        escolha++;
    }while(escolha<10);
    system("cls");
    printf("|-----------|\n| %c | %c | %c |\n|-----------|\n| %c | %c | %c |\n|-----------|\n| %c | %c | %c |\n|-----------|", matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2], matriz[2][0], matriz[2][1], matriz[2][2]);

    if(ganhador==1 || ganhador==2)
    printf("\nGanhador: Jogador numero %d", ganhador);
    else printf("\nDeu velha!");
    int opcao2;
    printf("\n\nDigite 1 para jogar novamente.\nDigite 2 para voltar ao MENU.\n");
    scanf("%d", &opcao2);
    switch(opcao2){
        case 1:
            escolha=1;
            jogodavelha();
        break;
        case 2:
            main();
        break;
    }
}
