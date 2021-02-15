#include <stdio.h>			// para usar printf()

#define NL putchar('\n')
#define PR(fmt, val) printf(#val " = %"#fmt "\t",(val)), NL

#define PRINT1(f, x1) PR(f, x1), NL
#define PRINT2(f, x1, x2) PR(f, x1) PRINT1(f, x2)
#define PRINT3(f, x1, x2, x3) PR(f, x1), PRINT2(f, x2, x3)
#define PRINT4(f, x1, x2, x3, x4) PR(f, x1), PRINT3(f, x2, x3, x4)
#define PRINT5(f, x1, x2, x3, x4, x5) PR(f, x1), PRINT4(f, x2, x3, x4, x5)

int a, b, c, d;
float e, f, g;
double h;
char car;
int *ptr;
int arr[10];

struct Persona
{
	char nombre[30];
	int edad;
	char sexo;
};

struct Persona juan = { "Juanito", 25, 'h'};
struct Persona *juancho; 