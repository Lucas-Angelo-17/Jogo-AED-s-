
#include "personagem.cpp"
#include "Armas.h"

/* Arma::Arma(string nomeArma){
    srand(time(0));
    
    this->nome = nomeArma;
    
    int qtdAtributos = 10;
    
    Accessdata *a = new Accessdata(qtdAtributos);
    
    int * atributos = a->obtemAtributos (classePersonagem);
    
    this->danoMin = atributos[0];
    this->danoMax = atributos[1];
    this->listaDeClasses = new int[0];
    
    int j;
    for(int i =2; i<qtdAtributos; i++)
        listaDeClasses[j++] = atributos[i];
    
    delete a;
    delete atributos; */

}

int Arma::calculaDano(){
    
    return (this->danoMin + (rand() %(this->danoMax - this->danoMin + 1)));
    
}

void Arsenal(Personagem *player1, int personagem1)
{
    //escolha de acordo com a permissão de cada classe criada 
    //NERFAR LADRÃO

    int a = 0;
    if(personagem1 == 1){
        printf("*ARSENAL DE SUA CLASSE*: \n");
        scanf("%d", &a);
        printf("1-Espada Barroca\n");
        printf("2-Porrete\n");
        switch(a){

            case 1:
            player1->arma = new Espada_Barroca();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;

            case 2:
            player1->arma = new Porrete();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem1 == 2){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Besta\n");
        printf("2-Cajado\n");
        printf("2-Esfera de Ataque\n");
        printf("2-Porrete\n");
        scanf("%d", &a);
        switch(a){
            case 1:
            player1->arma = new Besta();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            case 2:
            player1->arma = new Cajado();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            case 3:
            player1->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            case 4:
            player1->arma = new Porrete();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem1 == 3){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Tridente Sagrado\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player1->arma = new Tridente_Sagrado();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem1 == 4){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Tridente Sagrado\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player1->arma = new Tridente_Sagrado();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem1 == 5){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Esfera de ataque\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player1->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem1 == 6){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Porrete\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player1->arma = new Porrete();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem1 == 7){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Esfera de ataque\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player1->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem1 == 8){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Porrete\n");
        printf("2- Garra Letal\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player1->arma = new Porrete();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            case 2:
            player1->arma = new Garra_Letal();
            cout << "Nova arma: " << player1->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
}

void Arsenal2(Personagem *player2, int personagem2)
{
    //escolha de acordo com a permissão de cada classe criada 
    //NERFAR LADRÃO

    int a = 0;
    if(personagem2 == 1){
        printf("*ARSENAL DE SUA CLASSE*: \n");
        scanf("%d", &a);
        printf("1-Espada Barroca\n");
        printf("2-Porrete\n");
        switch(a){

            case 1:
            player2->arma = new Espada_Barroca();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            case 2:
            player2->arma = new Porrete();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem2 == 2){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Besta\n");
        printf("2-Cajado\n");
        printf("2-Esfera de Ataque\n");
        printf("2-Porrete\n");
        scanf("%d", &a);
        switch(a){
            case 1:
            player2->arma = new Besta();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            case 2:
            player2->arma = new Cajado();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            case 3:
            player2->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            case 4:
            player2->arma = new Porrete();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem2 == 3){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Tridente Sagrado\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            p1->arma = new Tridente_Sagrado();
            cout << "Nova arma: " << p1->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem2 == 4){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Tridente Sagrado\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player2->arma = new Tridente_Sagrado();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem2 == 5){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Esfera de ataque\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player2->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem2 == 6){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Porrete\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player2->arma = new Porrete();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem2 == 7){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Esfera de ataque\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player2->arma = new Esfera_de_ataque();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
    else if(personagem2 == 8){
        printf("*ARSENAL DE SUA CLASSE*: ");
        printf("1-Porrete\n");
        printf("2- Garra Letal\n");
        scanf("%d", &a);
        switch(a){

            case 1:
            player2->arma = new Porrete();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            case 2:
            player2->arma = new Garra_Letal();
            cout << "Nova arma: " << player2->arma->nome << "\n";
            break;

            default:
            printf("Opção inválida\n");
        }
    }
}