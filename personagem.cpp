#include "personagem.h"

int Personagem::calculaEsquiva(){
    //usar pontos de agilidade
    int esquiva = (rand() % 100) + 1;
    if(esquiva <= this->agilidade)
        return 1;
    else
        return 0;
}

int Personagem::recebeDanoDeArma(int dano){
    if(calculaEsquiva());
        return 0;
    // se não esquivou, então calcule a redução de dano pela % de armor
    //verifica esquiva (potos de habilidade)

    int danoDeArmaRecebido = dano - (dano * (this->armadura/100));
    //calcula dano com desconto da armadura

    if(danoDeArmaRecebido > this->vida)
        this->vida = 0;
    else
        this->vida -=danoDeArmaRecebido;

    return danoDeArmaRecebido;
    //se o dano for maior que a vida do personagem, retorna 0(morte), se não volta o dano recebido

}
int Personagem::recebeDanoDeMagia(int dano){
    if(calculaEsquiva());
        return 0;
    // se não esquivou, então calcule a redução de dano pela % de armor
    //verifica esquiva (potos de habilidade)

    int danoDeArmaRecebido = dano - (dano * (this->resistencia/100));
    //calcula dano com desconto da armadura

    if(danoDeArmaRecebido > this->vida)
        this->vida = 0;
    else
        this->vida -=danoDeArmaRecebido;

    return danoDeArmaRecebido;
    //se o dano for maior que a vida do personagem, retorna 0(morte), se não volta o dano recebido

}

int Personagem::ataqueArma(){

    int danoDaArma = 0;
    return danoDaArma + (danoDaArma * (this->forca/100));
}

int Personagem::ataqueMagia(int dano){
    return dano + (dano * (this->magica));
}

int Personagem::verificaVida(){
    return this->vida;
}

int Personagem::~Personagem(){
    cout << "\n*** Destroi os dados de personagem ***\n";
}

int Personagem::calculadadoBulKhatos(){
    float danoBulKhatos;
    if(criticoBulKhatos()==0){
        danoBulKhatos = (500 + (rand() %(900 - 500 + 1)));
    }
    else{
        danoBulKhatos = (500 + ((rand() %(400))*2));
    }
    return danoBulKhatos;
}

int Personagem::criticoBulKhatos(){

    int critico = (rand() % 100) + 1;
    if(critico <= 30)
        return 1;
    else
        return 0;
}


void Personagem::regeneraMana(){
    this->mana += 10;
}

int Personagem::verificaMana(){
    return this->mana;
}

void Personagem::gastaMana(int gasta){
    this->mana -= gasta;
}

void Personagem::regeneraVida(int regen){
    this->vida += vida;
}

