#include <stdio.h>			//  Para usar printf()
#include <stdlib.h>			//  par usar system()
#include "defs.h"

void bases()
{
	//  Bases numericas
	a = 179;
	printf("179 en Base 10 es %o en base 8\n", a);
	printf("179 en Base 10 es %X en base 16\n", a);

	a = 0263;		//  Anteponer 0 a un numero lo vuelve base 8
	printf("0263 en Base 8 es %d en base 10\n", a);
	printf("0263 en Base 8 es %x en base 16\n", a);

	a = 0xb3;		//  Anteponer 0x a un numero lo vuelve base 16
	printf("0xb3 en Base 16 es %d en base 10\n", a);
	printf("0xb3 en Base 16 es %o en base 8\n", a);
}

int main()
{
	// Jerarquía nivel 1 - Primarios
	// Paréntesis - Llamada a función ( () )
	bases();

	PR(f, 5.0/9.0 * (80 - 32) );

	PR(d, 2 + 3 * ((4 - 5) + 6));

	// Indice de Arreglo ( [] )
	arr[5] = 34;
	PR(d, arr[5]);

	// Punto o Parte de estructura ( . )
	PR(s, juan.nombre);
	PR(d, juan.edad);
	PR(c, juan.sexo);

	// flecha o Parte de estructura ( -> )
	juancho = &juan;		//  Juancho se vuelve un "apodo" o sobrenombre de Juan
	PR(s, juancho->nombre);
	PR(d, juancho->edad);
	PR(c, juancho->sexo);

	system("pause");
	return 0;
}
