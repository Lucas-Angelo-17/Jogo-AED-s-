#include "magias.h"
#include "personagem.cpp"

void listaMagia1(Personagem *player1, Personagem *player2, int personagem1){
    int magia;
    int dano = 0, mana = 0, cura = 0;
    switch(personagem1){
        case 1:
            cout << "Escolha a Magia: " << "\n" << "1-Tempestade" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 200;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 2:
            cout << "Escolha a Magia: " << "\n" << "1-Intoxicação" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 280;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 3:
            cout << "Escolha a Magia: " << "\n" << "1-Poção da Vida" << "\n" << "2-Bio" << "\n" << "3-Cura" << "\n" << "4-Intoxicação" << "\n" << "5-Tempestade" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    cura = 200;
                    mana = 12;
                    break;
                case 2:
                    dano = 360;
                    mana = 14;
                    break;
                case 3:
                    cura = 400;
                    mana = 16;
                    break;
                case 4:
                    dano = 280;
                    mana = 12;
                    break;
                case 5:
                    dano = 200;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 4:
            cout << "Escolha a Magia: " << "\n" << "1-Poção da Vida" << "\n" << "2-Flama Gelada" << "\n" << "3-Tempestade" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    cura = 200;
                    mana = 12;
                    break;
                case 2:
                    cura = 320;
                    mana = 14;
                    break;
                case 3:
                    dano = 200;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 5:
            cout << "Escolha a Magia: " << "\n" << "1-Bio" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 360;
                    mana = 14;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 6:
            cout << "Escolha a Magia: " << "\n" << "1-Intoxicação" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 280;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 7:
            cout << "Escolha a Magia: " << "\n" << "1-Hálito de Fogo" << "\n" << "2-Flama Gelada" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 400;
                    mana = 12;
                    break;
                case 2:
                    cura = 320;
                    mana = 14;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 8:
            cout << "Escolha a Magia: " << "\n" << "1-Intoxicação" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 280;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
    }
    player2->recebeDanoDeMagia(player1->ataqueMagia(dano));
    player1->regeneraVida(cura);
    player1->gastaMana(mana);
}

void listaMagia2(Personagem *player1, Personagem *player2, int personagem1){
    int magia;
    int dano = 0, mana = 0, cura = 0;
    switch(personagem1){
        case 1:
            cout << "Escolha a Magia: " << "\n" << "1-Tempestade" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 200;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 2:
            cout << "Escolha a Magia: " << "\n" << "1-Intoxicação" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 280;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 3:
            cout << "Escolha a Magia: " << "\n" << "1-Poção da Vida" << "\n" << "2-Bio" << "\n" << "3-Cura" << "\n" << "4-Intoxicação" << "\n" << "5-Tempestade" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    cura = 200;
                    mana = 12;
                    break;
                case 2:
                    dano = 360;
                    mana = 14;
                    break;
                case 3:
                    cura = 400;
                    mana = 16;
                    break;
                case 4:
                    dano = 280;
                    mana = 12;
                    break;
                case 5:
                    dano = 200;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 4:
            cout << "Escolha a Magia: " << "\n" << "1-Poção da Vida" << "\n" << "2-Flama Gelada" << "\n" << "3-Tempestade" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    cura = 200;
                    mana = 12;
                    break;
                case 2:
                    cura = 320;
                    mana = 14;
                    break;
                case 3:
                    dano = 200;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 5:
            cout << "Escolha a Magia: " << "\n" << "1-Bio" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 360;
                    mana = 14;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 6:
            cout << "Escolha a Magia: " << "\n" << "1-Intoxicação" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 280;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 7:
            cout << "Escolha a Magia: " << "\n" << "1-Hálito de Fogo" << "\n" << "2-Flama Gelada" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 400;
                    mana = 12;
                    break;
                case 2:
                    cura = 320;
                    mana = 14;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
        case 8:
            cout << "Escolha a Magia: " << "\n" << "1-Intoxicação" << "\n";
            cin >> magia;
            switch(magia){
                case 1:
                    dano = 280;
                    mana = 12;
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
    }
    player1->recebeDanoDeMagia(player2->ataqueMagia(dano));
    player2->regeneraVida(cura);
    player2->gastaMana(mana);
}
