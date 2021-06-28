#include <cstdlib>
#include <iostream>
#include <ctime>

#include <string.h>
#include "accessdata.h"

using namespace std;

class Arma{
    private:
        string nome;
        int danoMin;
        int danoMax;
        int *listaDeClasses;
        
    public:
        Arma(string nomeArma);
        int caculaDano();
        ~Arma;
};
