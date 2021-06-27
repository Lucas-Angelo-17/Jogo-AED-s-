#include "magias.h"
#include "personagem.cpp"

Magia::Magia(string nomeMagia){
    this->nome = nomeMagia;
}

void lista1(Personagem *player1, Personagem *player2, int personagem1){
    int magia;
    switch(personagem1){
        case 1:
            cout << "Escolha a Magia: " << "\n" << "1-Tempestade" << "\n";
            cin >> magia;
            switch(magia){
                case 1:

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
                
                    break;
                case 2:
                
                    break;
                case 3:
                
                    break;
                case 4:
                
                    break;
                case 5:
                
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
                
                    break;
                case 2:
                
                    break;
                case 3:
                
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

                    break;
                case 2:

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
                    
                    break;
                default:
                    cout << "Opção inválida" << "\n";
                    break;
            }
            break;
    }
}