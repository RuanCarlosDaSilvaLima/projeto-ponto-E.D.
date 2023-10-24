typedef struct ponto{
    float x, y;
} Ponto;

typedef Ponto* PPonto;

PPonto ponto_cria(float x, float y);
void ponto_libera(PPonto p);
float ponto_ler_x(PPonto p);
float ponto_ler_y(PPonto p);
void ponto_escrever_x(PPonto p, float x);
void ponto_escrever_y(PPonto p, float y);
float distancia(PPonto p1, PPonto p2);
void ponto_acessa(PPonto p, float *x, float *y);

#include "ponto.c"
