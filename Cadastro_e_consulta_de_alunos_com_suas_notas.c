#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int opmenu;
char nome[10][50];
int matricula[10];
int notas[10][3];
int u=0;
void pesquisa();


int main()
{
    menu();

    return 0;
}


//============================================

// MENU

int menu(){
    do{
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t\t----------------------------MENU----------------------------\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t1 - Para adicionar nome e matricula de aluno.\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t2 - Adicionar notas da disciplina (T, P e E).\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t3 - Pesquisa por aluno ou matricula.\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t0 - Para sair.\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t     Opcao escolhida: ");
    scanf("%d", &opmenu);
    switch(opmenu){
        case 1:{
            cadastro();
        break;
        }
        case 2:{
            addnotas();
        break;
        }
        case 3:{
            pesquisa();
        break;
        }
        case 0:{

        }
    }
    }while(opmenu!=0);
}

void cadastro(){
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t\t--------------------------CADASTRO---------------------------\n\n\n");
    for(u=0; u<10; u++){
        printf("\n\t\t\t\t\t\t\t\t\t\tNome: ");
        scanf("%s", &nome[u]);
        printf("\n\t\t\t\t\t\t\t\t\t\tMatricula: ");
        scanf("%d", &matricula[u]);
        int w;
        printf("\n\t\t\t\t\t\t\t\t\t\t1 - Adicionar outra\n\n\t\t\t\t\t\t\t\t\t\t0 - Voltar ao MENU\n");
        printf("\n\t\t\t\t\t\t\t\t\t\tOpcao escolhida: ");
        scanf("%d", &w);
        if(w==0){
            u=10;
            system("cls");
            menu();
        }
    }
}


void addnotas(){
    system("cls");
    char nomepesquisa[50];
    int matriculapesquisa;
    int e;

    do{
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t\t----------------------ADICIONAR-NOTAS-----------------------\n\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1 - Pesquisar por nome.\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t2 - Pesquisar por matricula.\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t0 - Voltar ao MENU.\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tOpcao escolhida: ");
    scanf("%d", &e);
    switch(e){
        case 1:{
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\tNome: ");
            scanf("%s", &nomepesquisa);
            int r=0;
            for(r=0; r<10; r++){
                if(strcmp(nome[r], nomepesquisa)==0){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t\t----------------------ADICIONAR-NOTAS-----------------------\n\n\n");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tNome: %s", nome[r]);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tMatricula: %d\n", matricula[r]);
                    int p=0;
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1 - inserir nota de Matematica.");//
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t2 - inserir nota de fisica.");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t3 - inserir nota de ingles.");
                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tOpcao escolhida: ");
                    scanf("%d", &p);
                    p-=1;
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1 - insira nota:");
                    scanf("%d", &notas[r][p]);
                }
            }
        break;
        }
        case 2:{
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\tMatricula: ");
            scanf("%d", &matriculapesquisa);
            int k=0;
            for(k=0; k<10; k++){
                if(matricula[k]==matriculapesquisa){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t\t----------------------ADICIONAR-NOTAS-----------------------\n\n\n");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tNome: %s", nome[k]);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tMatricula: %d\n", matricula[k]);
                    int p=0;
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1 - inserir nota de Matematica.");//
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t2 - inserir nota de fisica.");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t3 - inserir nota de ingles.");
                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tOpcao escolhida: ");
                    scanf("%d", &p);
                    p-=1;
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1 - insira nota:");
                    scanf("%d", &notas[k][p]);
                }
            }
        break;
        }
    }
    }while(e==1||e==2);
}

void pesquisa(){
    system("cls");
    char nomepesquisa[50];
    int matriculapesquisa;
    int e=0;

    do{
    printf("\n\t\t\t\t\t\t\t\t\t----------------------PESQUISAR-NOTAS-----------------------\n\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1 - Pesquisar por nome.\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t2 - Pesquisar por matricula.\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t0 - Voltar ao MENU.\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tOpcao escolhida: ");
    scanf("%d", &e);
    switch(e){
        case 1:{
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\tNome: ");
            scanf("%s", &nomepesquisa);
            int r=0;
            for(r=0; r<10; r++){
                if(strcmp(nome[r], nomepesquisa)==0){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t\t--------------------------NOTAS-----------------------\n\n\n");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tNome: %s", nome[r]);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tMatricula: %d\n", matricula[r]);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\tMatematica = 1\t fisica = 2\t Ingles = 3\n");
                    for(int l=0; l<3; l++){
                        printf("\n\n\t\t\t\t\t\t\t\t\t\t\tNota %d: %d\n", l+1,notas[r][l]);
                    }
                }
            }
        break;
        }
        case 2:{
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\tMatricula: ");
            scanf("%d", &matriculapesquisa);
            int k=0;
            for(k=0; k<10; k++){
                if(matricula[k]==matriculapesquisa){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t\t--------------------------NOTAS-----------------------\n\n\n");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tNome: %s", nome[k]);
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tMatricula: %d\n", matricula[k]);
                     printf("\n\n\t\t\t\t\t\t\t\t\t\tMatematica = 1\t fisica = 2\t Ingles = 3\n");
                    for(int l=0; l<3; l++){
                        printf("\n\n\t\t\t\t\t\t\t\t\t\t\tNota %d: %d\n", l+1,notas[k][l]);
                    }
                }
            }
        break;
        }
    }
    }while(e==1||e==2);

}
