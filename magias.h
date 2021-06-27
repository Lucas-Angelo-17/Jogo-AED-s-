
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

class Magia{
    private:
        string nome;
    public:
        Magia(string nomeMagia);
        int danoMagia;
        int curaMagia;
        int gastoMana;
        ~Magia;
};