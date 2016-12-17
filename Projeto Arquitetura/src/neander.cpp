#include <stdio.h>
#include <stdlib.h>

struct neander {
    int linha;
    int label;
    int instrucao;
    int operando;
    int posmemoria;
};
//não conseguimos seguir adiante
typedef neander_t struct neander *;
