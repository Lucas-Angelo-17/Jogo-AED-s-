#include "Armas.h"
<<<<<<< HEAD

=======
>>>>>>> 5888730300af265f1beb5b9209130988f3107014
#include "personagem.cpp"

Arma::Arma(string nomeArma){
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
    delete atributos;

}

int Arma::calculaDano(){
    
    return (this->danoMin + (rand() %(this->danoMax - this->danoMin + 1)));
    
}
