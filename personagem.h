#include <cstdlib>
#include <iostream>
#include <ctime>

#include <string.h>
#include "accessdata.h"

using namespace std;
class Personagem{
    private:
    string classe;
    string nome;
    int vida;
    int mana;
    int forca;
    int magia;
    int armadura;
    int resistencia;
    int agilidade;
    Arma *arma;
    Magia *magia;
    int calculaEsquiva ();
    
    public:
    Personagem(string classePersonagem);
    int ataqueArma();
    int ataqueMagia();
    int recebeDanoDeArma(int dano);
    int recebeDanoDeMagia(int dano);
    int verificaVida();
    ~Personagem();
    
};