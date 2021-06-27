#include <cstdlib>
#include <iostream>
#include <ctime>

#include <string.h>
#include "accessdata.h"

using namespace std;

Personagem *player1, *player2;

player1 = new Personagem("guerreiro.txt");

player2 = new Personagem("mago.txt");

player2->recebeDanoDeArma(player1->ataqueArma());

if(player2->verificaVida()==0)
cout << "Morreu";