#include <cstdlib>
#include <iostream>
#include <ctime>

#include <string.h>
#include "accessdata.h"
#include "personagem.h"
#include "magias.cpp"
#include "BancoDeDados.h"

using namespace std;

//Estado Atual do Player1
void statusplayer1(Personagem *player1)
{
    printf("\n\nStatus do Player 1\n");
    cout << "Classe:" << player1->nome << "\n";
    printf("Vida Atual:%d\n", player1->vida);
    printf("Mana Atual:%d\n\n", player1->mana);
}
//Estado Atual do Player2
void statusplayer2(Personagem *player2)
{
    printf("\n\nStatus do Player 2\n");
    cout << "Classe:" << player2->nome << "\n";
    printf("Vida Atual:%d\n", player2->vida);
    printf("Mana Atual:%d\n\n", player2->mana);
}

int main() {
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
    }while(personagem1 <= 0 || 8 < personagem1);

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
    }while(personagem2 <= 0 || 8 < personagem2);

    int aux1, aux2;
    do{
        aux1 = 0;
        aux2 = 0;

        cout << "\n\nPlayer 1\n1-Usar arma\n";
        cout << "2-Usar magia";
        if(player1->mana == 0){
            cout << " (indisponivel)\n";
        }
        cout << "3-Trocar de arma\n");
        if(player1->*********** == 1){ //chance arma especial
            cout << "4-Usar Voto Solene de Bul-Kathos\n");
        }
        cout << "Escolha a sua ação: ";
        cin >> aux1;
        if(aux1 == 1){
            cout << "Player 1 utilizou arma: " << player1->arma->nome << "\n";
            player2->recebeDanoDeArma(player1->ataqueArma());
        }
        else if(aux1 == 2){
            cout << "Selecione a magia\n";
            listaMagia1(player1, player2, personagem1);
        }
        else if(aux1 == 3){
            cout << "Selecione a arma\n";
            ListaDeArmas1(player1, personagem1);
        }
        else if(aux1 == 4){
            player1->arma = new BulKathos();
            player2->recebeDanoLendario(player1->ataquelendario());
            switch(personagem1){
                case 1:
                    player1->arma = new Porrete();
                    break;
                case 2:
                    player1->arma = new Cajado();
                    break;
                case 3:
                    player1->arma = new Cajado();
                    break;
                case 4:
                    player1->arma = new Besta();
                    break;
                case 5:
                    player1->arma = new Garra_Letal();
                    break;
                case 6:
                    player1->arma = new Cajado();
                    break;
                case 7:
                    player1->arma = new Garra_Letal();
                    break;
                case 8:
                    player1->arma = new Cajado();
                    break;
            }
        }
        else{cout << "Opção inválida\n";}
        if(aux1 != 2){
            cout << "Recuperou 10 de mana\n";
            player1->regeneraMana();
        }
       
        cout << statusplayer1 << statusplayer2;

        cout << "\n\nPlayer 2\n1-Usar arma\n";
        cout << "2-Usar magia";
        if(player2->mana == 0){
            cout << " (indisponivel)\n";
        }
        cout << "3-Trocar de arma\n";
        if(player2->******** == 1){
            cout << "4-Usar Voto Solene de Bul-Kathos\n";
        }
        cout << "Escolha a sua ação: ";
        cin >> aux2;
        if(aux2 == 1){
            cout << "Player 2 utilizou arma: " << player2->arma->nome << "\n";
            player1->recebeDanoDeArma(player2->ataqueArma());
        }
        else if(aux2 == 2){
            cout << "Selecione a magia\n";
            listaMagia2(player2, player1, personagem2);
        }
        else if(aux2 == 3){
            cout << "Selecione a arma\n";
            ListaDeArmas2(player2, personagem2);
        }
        else if(aux2 == 4){
            player2->arma = new BulKathos();
            player1->recebeDanoLendario(player2->ataquelendario());
            switch(personagem2){
                case 1:
                    player2->arma = new Porrete();
                    break;
                case 2:
                    player2->arma = new Cajado();
                    break;
                case 3:
                    player2->arma = new Cajado();
                    break;
                case 4:
                    player2->arma = new Besta();
                    break;
                case 5:
                    player2->arma = new Garra_Letal();
                    break;
                case 6:
                    player2->arma = new Cajado();
                    break;
                case 7:
                    player2->arma = new Garra_Letal();
                    break;
                case 8:
                    player2->arma = new Cajado();
                    break;
            }
        }
        else{cout << "Opção inválida\n";}
        if(aux2 != 2){
            cout << "Recuperou 10 de mana\n";
            player2->regeneraMana();
        }
        cout << statusplayer1 << statusplayer2;
        if(player2->vida == 0){
            cout << "\nGANHADOR!\n----------------\nJogador 1\n----------------\n";
        }
        else if(player1->vida == 0){
            cout << "\nGANHADOR!\n----------------\nJogador 2\n----------------\n";
        }
    }
    while(player1->vida != 0 || player2->vida != 0);

    //quando a vida de um deles chegar a zero
    cout << "\n\nGame over?" << "\n\n" << "RAAAAAWRM" << "\n-Um dragao celestial aparece-";
    
    cout << "\n\nO vencedor do duelo em prantos se questiona se valeu a pena matar sem motivo";
    cout << "\nVoce mexe no bolso e encontra uma porcao de reviver.\nCom medo de nao conseguir derrotar o dragao, pensa se vale a pena reviver seu antigo inimigo";
    //se player1 tiver ganhado
    if (player2->vida < 0)
    {
        cout << "\n\nPlayer1: Voce deseja reviver o Player2?\nDigite s para reviver ou n para nao: ";
    }
    else //se player2 tiver ganhado
    {
        cout << "\n\nPlayer2: Voce deseja reviver o Player1?\nDigite s para reviver ou n para nao: ";
    }
    
    char resposta;
    string habilidadeEspecial, habilidadeFusao;
    int i, j, k; 
    i = j = k = 0;
    cin >> resposta;
    while(i==0){
        switch(resposta){
            case 's':
                i=1;
                cout << "\n\nVoce o revive e descobre uma habilidade oculta.\n\nNova habilidade desbloqueada: SUPER FUSAO";
                break;
            case 'n':
                i=1;
                cout << "\nVoce nao o revive e descobre a vazia e triste vida sem um companheiro de batalha.\nVoce pensa por algum momento";
                int tempo = clock();
                while(clock() - tempo < 2500){}
                cout << "\nEntao decide mudar de ideia e o revive.";
                break;
            default:
                cout << "\nValor invalido, digite novamente: ";
                cin >> resposta;
                break;
        }
    }
    while(j==0){
        cout << "\nDigite FUSAO para usar a habilidade ou FUGIR para tentar escapar deste formidavel dragao: ";
        cin >> habilidadeEspecial;
        if (habilidadeEspecial == "FUSAO")
        {
            j=1;
            cout << "\n\nFUSAAAAAAO\n\nOs 2 se encostam e se transformam em uma forma suprema e poderosa";
            cout << "\n\nO dragao logo cria uma oscilacao estelar, formando um disco em expansão, que explode";
            int tempo = clock();
            while(clock() - tempo < 2500){}
            cout << "\n\nVoces ficam atordoados mas conseguem se manter em pe.";
            cout << "\nCom a habilidade da fusao voces conseguem acumular chakra suficiente para usar um grande poder.";
            cout << "\n\nDigite GOMU para usar a habilidade de borracha ou RASENGAN para usar a habilidade de vento\n";
            cin >> habilidadeFusao;
            while(k==0){
                if(habilidadeFusao == "GOMU"){
                    k=1;
                    cout << "\nVoces acumulam haki em suas maos, as esticam e lancam seu poder\nGOMU GOMU NOOO PISTOL\nO PODEROSO SOCO DE BORRACHA COM HAKI ESMAGA O DRAGAO\n";
                    cout << "\nParabens, inimigo derrotado\nGG! Fim de jogo!\n";
                    return 0;
                }
                else if(habilidadeFusao == "RASENGAN"){
                    k=1;
                    cout << "\nVoces manipulam o chakra puro em forma de espiral e lanca contra o inimigo\nRASENGAAAN\nO ataque atinge o dragao";
                    cout << "\nO ataque nao foi efetivo e o inimigo lanca uma explosao de puro fogo estelar.";
                    cout << "\nVoces morreram!\nFim de jogo!\n";
                    return 0;
                }
                else{
                    cout << "\nValor invalido, digite novamente: ";
                }
            }
        }
        else if(habilidadeEspecial == "FUGIR"){
            j=1;
            cout << "\n\nVoces tentam fugir, mas o dragao possui um poder implacavel e os persegue na velocidade de um cometa lendario.\n";
            cout << "\nAo longe aparece um pessoa, mas nao parece ser uma pessoa qualquer.";
            int tempo = clock();
            while(clock() - tempo < 2000){}
            cout << "\nYare yare daze...";
            tempo = 0;
            tempo = clock();
            while(clock() - tempo < 2000){}
            cout << "\nEu Jotaro irei salva-los.\nEntao JoJo mostra seu poder de stand e ataca o inimigo impiedosamente\nORA ORA ORA ORA ORA\nEntao ele derrota o dragao e voces sae vivos dessa.";
            tempo = 0;
            tempo = clock();
            while(clock() - tempo < 2000){}
            cout << "\n\nParabens, inimigo derrotado\nGG! Fim de jogo!\n";
            return 0;
        }
        else{
            cout << "\nValor invalido, tente novamente";
        }
    }
}