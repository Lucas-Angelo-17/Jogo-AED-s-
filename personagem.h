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
    int magica;
    int armadura;
    int resistencia;
    int agilidade;
    Arma *arma;
    Magia *magia;
    int calculaEsquiva ();
    int criticoBulKhatos();
    int calculadadoBulKhatos();
    
    public:
    Personagem(string classePersonagem);
    int ataqueArma();
    int ataqueMagia(int dano);
    int recebeDanoDeArma(int dano);
    int recebeDanoDeMagia(int dano);
    int verificaVida();
    ~Personagem();
    void regeneraMana();
    void regeneraVida(int regen);
    void gastaMana(int gasta);
    int verificaMana();
};