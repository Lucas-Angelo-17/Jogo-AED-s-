#include "Armas.h"
#include "magias.h"
#include "personagem.h"
using namespace std;
//Humanos.
class Guerreiro : public Personagem
{
    public:
        Guerreiro(){
            nome = "Guerreiro";
            vida = 4000;
            mana = 30;
            maxmana = 30;
            maxvida = 4000;
            forca = 100;
            magica = 20;
            armadura = 80;
            resistencia = 20;
            agilidade = 20;
            arma = new Porrete();
        }
};
class Ladrao : public Personagem
{
    public:
        Ladrao(){
            nome = "Ladrão";
            vida = 2800;
            mana = 50;
            maxmana = 50;
            maxvida = 2800;
            forca = 50;
            magica = 30;
            armadura = 40;
            resistencia = 50;
            agilidade = 80;
            arma = new Cajado();
        }
};
class Mago : public Personagem
{
    public:
        Mago(){
            nome = "Mago";
            vida = 2500;
            mana = 100;
            maxmana = 100;
            maxvida = 2500;
            forca = 40;
            magica = 100;
            armadura = 30;
            resistencia = 80;
            agilidade = 40;
            arma = new Cajado();
        }
};
class Paladino : public Personagem
{
    public:
        Paladino(){
            nome = "Paladino";
            vida = 3200;
            mana = 80;
            maxmana = 80;
            maxvida = 3200;
            forca = 60;
            magica = 50;
            armadura = 60;
            resistencia = 60;
            agilidade = 60;
            arma = new Besta();
        }
};
//Inumanos.
class Animal : public Personagem
{
    public:
        Animal(){
            nome = "Animal";
            vida = 3200;
            mana = 30;
            maxmana = 30;
            maxvida = 3200;
            forca = 80;
            magica = 20;
            armadura = 80;
            resistencia = 20;
            agilidade = 50;
            arma = new Garra_Letal();
        }
};
class Troll : public Personagem
{
    public:
        Troll(){
            nome = "Troll";
            vida = 2800;
            mana = 20;
            maxmana = 20;
            maxvida = 2800;
            forca = 100;
            magica = 20;
            armadura = 80;
            resistencia = 20;
            agilidade = 20;
            arma = new Cajado();
        }
};
class Dragao : public Personagem
{
    public:
        Dragao(){
            nome = "Dragão";
            vida = 3000;
            mana = 40;
            maxmana = 40;
            maxvida = 3000;
            forca = 100;
            magica = 20;
            armadura = 50;
            resistencia = 50;
            agilidade = 30;
            arma = new Garra_Letal();
        }
};
class Zumbi : public Personagem
{
    public:
        Zumbi(){
            nome = "Zumbi";
            vida = 2500;
            mana = 20;
            maxmana = 20;
            maxvida = 2500;
            forca = 40;
            magica = 20;
            armadura = 40;
            resistencia = 80;
            agilidade = 50;
            arma = new Cajado();
        }
};