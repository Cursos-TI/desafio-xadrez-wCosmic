#include <stdio.h>

#include <stdio.h>

int main(){

//variaveis - peças do tabuleiro
int torre = 1;
int bispo = 1;
int rainha = 1;

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
printf("4 - Sair.\n");
scanf("%d", &menu2);

    switch (menu2)
    {
    case 1: // movendo a torre com While
    while (torre <= 5)
    {
        printf("Movendo para direita\n", torre);
        torre++;
    }
    break;

    case 2: // movendo o bispo com o DoWhile
    do { 
        printf("Movendo para Cima, Direita\n", bispo);
        bispo++;
    
        } while (bispo <= 5 );

        {
    }
    break;
    
    case 3: // movendo a rainha com o For
        for (rainha = 0; rainha < 8; rainha++)
        printf("Movendo para esquerda\n");

    break;

    case 4: // Opcao para sair do jogo
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
