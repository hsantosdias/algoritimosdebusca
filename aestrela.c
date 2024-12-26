#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estruturas equivalentes aos registros definidos em Pascal
typedef struct {
    int x;
    int y;
} Coord;

typedef struct {
    int a;
    int b;
    int c;
} Vector;

typedef struct {
    char a[256];  // Limitando o tamanho da string
    float b;
} Resultado;

// Função principal simulando a estrutura do programa Pascal
int main() {
    // Exemplo de uso das estruturas
    Coord coordenada;
    coordenada.x = 10;
    coordenada.y = 20;

    Vector vetor;
    vetor.a = 1;
    vetor.b = 2;
    vetor.c = 3;

    Resultado resultado;
    strcpy(resultado.a, "Exemplo de Resultado");
    resultado.b = 42.5;

    // Imprimindo os valores para verificar
    printf("Coordenadas: x = %d, y = %d\n", coordenada.x, coordenada.y);
    printf("Vetor: a = %d, b = %d, c = %d\n", vetor.a, vetor.b, vetor.c);
    printf("Resultado: a = %s, b = %.2f\n", resultado.a, resultado.b);

    return 0;
}
