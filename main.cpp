#include <cstdlib>
#include <iostream>
#include <ctime>

#include <string.h>
#include "accessdata.h"
#include "personagem.h"
#include "Armas.h"
#include "magias.h"


using namespace std;

//Estado Atual do Player1
void statusplayer1(Personagem *player1)
{
    printf("\nStatus do Player 1\n");
    cout << "Classe:" << player1->nome << "\n";
    printf("Vida Atual:%d\n", player1->vida);
    printf("Mana Atual:%d\n", player1->mana);
}
//Estado Atual do Player2
void statusplayer2(Personagem *player2)
{
    printf("\nStatus do Player 2\n");
    cout << "Classe:" << player2->nome << "\n";
    printf("Vida Atual:%d\n", player2->vida);
    printf("Mana Atual:%d\n", player2->mana);
}

int funcionalidade(*player1, *player2, int personagem1, int personagem2){

    int variavel1;
    int variaver2;
    int turno=1;

    printf("Começou: Rodada %d", turno);

    while(verificaVida()!=0){
        statusplayer1(*player1);
        printf("*Turno do Player 1*\n");

        if(p1->chanceLendaria() == 1){

        printf("**Você recebeu a bençam lendária.**");
        printf("1-Usar arma\n");

        if(p1->mana != 0){
            printf("2-Usar magia\n");
        }

        printf("3-Trocar de arma\n");

        printf("4-Ataque Lendário com o voto solene de Bul-Khatos")

        printf("Escolha a sua ação: ");

        scanf("%d", &variavel1);
        }

        if(p1->chanceLendaria() =! 1){
            
        printf("1-Usar arma\n");

        if(p1->mana != 0){
            printf("2-Usar magia\n");
        }

        printf("3-Trocar de arma\n");

        printf("Escolha a sua ação: ");

        scanf("%d", &variavel1);
        }

    if(variavel1 == 1){
        cout << "Player 1 utilizou arma: " << player1->arma->nome << "\n";
            player2->recebeDanoDeArma(player1->calculaDano());
    }
    else if(variavel1 == 2){
        printf("Player 1, qual magia para conjurar? ");

    }
    else if(variavel == 3){
        printf("**Troca de Arma**");
        cout << "Player 1 trocou para a arma: " << player1->arma->nome << "\n";
        Arsenal(Personagem *player1, int personagem1);
    }
    else if(variavel1 == 4){
        printf("Parabens Gurreiro, use com sabedoria o Voto Solene de Bul Khatos.");
        player2->recebeDanoDeArma(player1->calculadadoBulKhatos());
    }
    
    turno++;

    //********************************************************************

    statusplayer1(*player2);

        printf("Começou: Rodada %d", turno);
        printf("*Turno do Player 2*\n");

        if(p1->chanceLendaria() == 1){

        printf("**Você recebeu a bençam lendária.**");
        printf("1-Usar arma\n");

        if(p1->mana != 0){
            printf("2-Usar magia\n");
        }

        printf("3-Trocar de arma\n");

        printf("4-Ataque Lendário com o voto solene de Bul-Khatos")

        printf("Escolha a sua ação: ");

        scanf("%d", &variavel1);
        }

        if(p1->chanceLendaria() =! 1){
            
        printf("1-Usar arma\n");

        if(p1->mana != 0){
            printf("2-Usar magia\n");
        }

        printf("3-Trocar de arma\n");

        printf("Escolha a sua ação: ");

        scanf("%d", &variavel1);
        }

    if(variavel1 == 1){
        cout << "Player 1 utilizou arma: " << player2->arma->nome << "\n";
            player1->recebeDanoDeArma(player2->calculaDano());
    }
    else if(variavel1 == 2){
        printf("Player 1, qual magia para conjurar? ");

    }
    else if(variavel == 3){
        printf("**Troca de Arma**");
        cout << "Player 1 trocou para a arma: " << player2->arma->nome << "\n";
        Arsenal(Personagem *player2, int personagem2);
    }
    else if(variavel1 == 4){
        printf("Parabens Gurreiro, use com sabedoria o Voto Solene de Bul Khatos.");
        player1->recebeDanoDeArma(player2->calculadadoBulKhatos());
    }

    }

    if(player2->verificaVida()==0)
    cout << "*Jogador 1 Ganhou a Partida*";

    if(player1->verificaVida()==0)
    cout << "*Jogador 2 Ganhou a Partida*";

}

int main {
    //Intodução
    printf("Role Play Game -Classic- \n");
    printf ("****************************\n");
    printf ("Role Play Game -Classic- funciona por turnos");
    printf ("a cada turno que passa ambos os jogadores tem o direito de ataquer utilizando magias ou armas. \n");
    //Declara Variavel
    Personagem *player1;
    Personagem *player2;
    int personagem1;
    int personagem2;
    //Opções de Classes para escolha
    printf("Lista de Personagens\n");
    printf("\n");
    printf("Humanos:\n");
    printf("1-Guerreiro\n");
    printf("2-Ladrão\n");
    printf("3-Mago\n");
    printf("4-Paladino\n");
    printf("****************\n");
    printf("Inumanos:\n");
    printf("5-Animal\n");
    printf("6-Troll\n");
    printf("7-Dragão\n");
    printf("8-Zumbi\n");
    //switch case para cada caso para criação de variavel
    do{
    printf("\nPersonagem do Jogador 1: ");
    scanf("%d", &personagem1);
    switch (personagem1)
    {
    case 1:
        printf("*Guerreiro*\n");
        player1 = new Guerreiro();
        break;
    case 2:
        printf("*Ladrão*\n");
        player1 = new Ladrao();
        break;
    case 3:
        printf("*Mago*\n");
        player1 = new Mago();
        break;
    case 4:
        printf("*Paladino*\n");
        player1 = new Paladino();
        break;
    case 5:
        printf("*Animal*\n");
        player1 = new Animal();
        break;
    case 6:
        printf("*Troll*\n");
        player1 = new Troll();
        break;
    case 7:
        printf("*Dagrão*\n");
        player1 = new Dagrao();
        break;
    case 8:
        printf("*Zumbi*\n");
        player1 = new Zumbi();
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }
    }while(personagem1 <= 0 || 8 < personagem1)

    do{
    printf("\nPersonagem do Jogador 2: ");
    scanf("%d", &personagem2);
    switch (personagem2)
    {
    case 1:
        printf("*Guerreiro*\n");
        player2 = new Guerreiro();
        break;
    case 2:
        printf("*Ladrão*\n");
        player2 = new Ladrao();
        break;
    case 3:
        printf("*Mago*\n");
        player2 = new Mago();
        break;
    case 4:
        printf("*Paladino*\n");
        player2 = new Paladino();
        break;
    case 5:
        printf("*Animal*\n");
        player2 = new Animal();
        break;
    case 6:
        printf("*Troll*\n");
        player2 = new Troll();
        break;
    case 7:
        printf("*Dagrão*\n");
        player2 = new Dagrao();
        break;
    case 8:
        printf("*Zumbi*\n");
        player2 = new Zumbi();
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }
    }while(personagem2 <= 0 || 8 < personagem2)

    funcionalidade(player1, player2, personagem1, personagem2);
}

