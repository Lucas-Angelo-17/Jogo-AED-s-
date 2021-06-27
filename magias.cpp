#include "magias.h"
#include "personagem.cpp"

Magia::Magia(string nomeMagia){
    this->nome = nomeMagia;
}



int Magia::calculaDanoMagia(){
    if (nome == "Poção da Vida"){
        return 0;
    }
    else if(nome == "Cura"){
        return 0;
    }
    else if(nome == "Hálito de Fogo"){
        return 400;
    }
    else if(nome == "Bio"){
        return 360;
    }
    else if(nome == "Flama Gelada"){
        return 320;
    }
    else if(nome == "Intoxicação"){
        return 280;
    }
    else if(nome == "Tempestade"){
        return 200;
    }
}
int Magia::calculaCuraMagia(){
    if (nome == "Poção da Vida"){
        return 200;
    }
    else if(nome == "Cura"){
        return 400;
    }
    else{
        return 0;
    }
}
int Magia::calculaGastoMana(){
    if (nome == "Poção da Vida"){
        return 12;
    }
    else if(nome == "Cura"){
        return 16;
    }
    else if(nome == "Hálito de Fogo"){
        return 12;
    }
    else if(nome == "Bio"){
        return 14;
    }
    else if(nome == "Flama Gelada"){
        return 14;
    }
    else if(nome == "Intoxicação"){
        return 12;
    }
    else if(nome == "Tempestade"){
        return 12;
    }
}
int Magia::ganhaMana(){
    
}