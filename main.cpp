#include <cstdlib>
#include <iostream>
#include <ctime>

#include <string.h>
#include "accessdata.h"

using namespace std;

int main {
    printf("Role Play Game -Classic- \n");
    printf ("****************************\n");
    printf ("Role Play Game -Classic- funciona por turnos");
    printf ("a cada turno que passa ambos os jogadores tem o direito de ataquer utilizando magias ou armas \n");
}

Personagem *player1, *player2;

player1 = new Personagem("guerreiro.txt");

player2 = new Personagem("mago.txt");

player2->recebeDanoDeArma(player1->ataqueArma());

if(player2->verificaVida()==0)
cout << "Morreu";