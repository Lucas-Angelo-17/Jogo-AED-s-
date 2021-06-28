#include <cstdlib>
#include <iostream>
#include <ctime>

#include <string.h>
#include "accessdata.h"

using namespace std;
class Personagem{
    public:
    string classe;
    string nome;
    int vida;
    int mana;
    int forca;
    int magica;
    int armadura;
    int resistencia;
    int agilidade;
    Arma *arma;
    Magia *magia;
    int calculaEsquiva ();

    Personagem(string classePersonagem);
    int ataqueArma();
    int ataqueMagia(int dano);
    int recebeDanoDeArma(int dano);
    int recebeDanoDeMagia(int dano);
    int verificaVida();
    void regeneraMana();
    void regeneraVida(int regen);
    void gastaMana(int gasta);
    int verificaMana();
    ~Personagem();
    
};