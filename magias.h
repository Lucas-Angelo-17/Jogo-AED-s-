#include <cstdlib>
#include <iostream>
#include <ctime>

#include <string.h>

using namespace std;

class Magia{
    private:
        string nome;
    public:
        Magia(string nomeMagia);
        int calculaDanoMagia();
        int calculaCuraMagia();
        int calculaGastoMana();
        int ganhaMana();
        ~Magia;
};