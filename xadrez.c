#include <stdio.h>

void moverrainha(int movirain){
    if (movirain > 0) {
        printf("Movendo para esquerda\n");
        moverrainha(movirain - 1);
    }
}

void movertorre(int movitower){
    if(movitower > 0) {
        printf("Movendo para Direita\n");
        movertorre(movitower - 1);
    }
}

void moverbispo(int movibispo){
    if(movibispo > 0) {
        printf("Movendo para Cima, Direita\n");
        moverbispo(movibispo - 1);
    }
}

int main(){

//variaveis - peças do tabuleiro
int torre = 1, bispo = 1, rainha = 1, cavalo;


//Variavel de movimentação
int pocoto = 1;

//Criando variaveis para menu
int menu, menu2;

//Menu principal
printf("Bem vindo ao Super Xadrez 2000...\n");
printf("1 - Iniciar o Jogo.\n");
printf("2 - Regras.\n");
printf("3 - Sair do jogo.\n");
printf("Por favor, digite a opção desejada...\n");
scanf("%d", &menu);

switch (menu) // Menu de jogabilidade
{
case 1:
printf("Vamos jogar!\n");
printf("Quais peças voce quer mover?\n");
printf("1 - Torre.\n");
printf("2 - Bispo.\n");
printf("3 - Rainha.\n");
printf("4 - Cavalo.\n");
printf("5 - Sair.\n");
scanf("%d", &menu2);

    switch (menu2)
    {
    case 1: // movendo a torre com recursividade
    movertorre(5);

    break;

    case 2: // movendo o bispo com recursividade
       moverbispo(5);
    
    break;

    case 3: // movendo a rainha com recursividade
        moverrainha(8);


    break;

    case 4: // movendo o cavalo com loop aninhado
    while (pocoto--)
    {
        for (cavalo = 0; cavalo < 2; cavalo++){
            printf("Movendo para baixo\n");
        }
        printf("Movendo para esquerda\n");
    }

    break;

    case 5: // Opcao para sair do jogo
        printf("Saindo do jogo...");
        break;
    default: //caso alguma opcao seja invalida
        printf("Opção Invalida!\n");
        break;


    }
    break;
case 2:
    printf("Regras\n");
    printf("Area em construção...\n");
    break;
case 3:
    printf("Saindo do jogo...\n");
default:
    printf("Opção Invalida\n");
    break;
}

return 0;

}